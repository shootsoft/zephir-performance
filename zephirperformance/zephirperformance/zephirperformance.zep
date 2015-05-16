namespace ZephirPerformance;

class ZephirPerformance
{
	public static function guid()
	{
	    return sprintf("%04X%04X-%04X-%04X-%04X-%04X%04X%04X", 
	    	mt_rand(0, 65535), mt_rand(0, 65535), 
	    	mt_rand(0, 65535), mt_rand(16384, 20479), 
	    	mt_rand(32768, 49151), mt_rand(0, 65535), 
	    	mt_rand(0, 65535), mt_rand(0, 65535));
	}

	public static function batch(int count = 1)
	{
		int i = 0;
		var guid;
		while i<count{
			let guid = self::guid();
			let i+=1;
		}
	}
}