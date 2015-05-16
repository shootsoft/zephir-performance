<?php

use \ZephirPerformance\ZephirPerformance;


class PHPPerformance
{

    public static function guid()
    {
        return sprintf('%04X%04X-%04X-%04X-%04X-%04X%04X%04X', 
            mt_rand(0, 65535), mt_rand(0, 65535), 
            mt_rand(0, 65535), mt_rand(16384, 20479), 
            mt_rand(32768, 49151), mt_rand(0, 65535), 
            mt_rand(0, 65535), mt_rand(0, 65535));
    }

}

class PerformanceTest extends PHPUnit_Framework_TestCase 
{
	public function test1Speed()
	{
		//warm-up
		ZephirPerformance::guid()."\n";
		PHPPerformance::guid()."\n";
		ZephirPerformance::guid()."\n";
		PHPPerformance::guid()."\n";

		echo "Test 1:\n";
        $start = $this->getMillisecond();
        for ($i=0; $i < 1000000; $i++) { 
            $guid = ZephirPerformance::guid();
        }
        $end = $this->getMillisecond();

        //echo $guid;
        $sp1 = $end - $start;
        echo "Zephire " . $sp1 . " milliseconds\n";
		
        $start = $this->getMillisecond();
        for ($i=0; $i < 1000000; $i++) { 
            $guid = PHPPerformance::guid();
        }
        $end = $this->getMillisecond();
        $sp2 = $end - $start;
        echo "PHP " . $sp2 . " milliseconds\n";
		echo "".($sp2 - $sp1)/($sp2+0.0)."\n";
	}

	public function test2Speed()
	{
		echo "Test 2:\n";
		//warm-up
		ZephirPerformance::guid()."\n";
		PHPPerformance::guid()."\n";
		ZephirPerformance::guid()."\n";
		PHPPerformance::guid()."\n";

        $start = $this->getMillisecond();
        ZephirPerformance::batch(1000000);
        $end = $this->getMillisecond();

        //echo $guid;
        $sp1 = $end - $start;
        echo "Zephire " . $sp1 . " milliseconds\n";

        $start = $this->getMillisecond();
        for ($i=0; $i < 1000000; $i++) { 
            $guid = PHPPerformance::guid();
        }
        $end = $this->getMillisecond();
        $sp2 = $end - $start;
        echo "PHP " . $sp2 . " milliseconds\n";
		echo "".($sp2 - $sp1)/($sp2+0.0)."\n";
        
	}




    function getMillisecond()
    {
        list($s1,$s2)=explode(' ',microtime());
        return (float)sprintf('%.0f',(floatval($s1)+floatval($s2))*1000);
    }

}
