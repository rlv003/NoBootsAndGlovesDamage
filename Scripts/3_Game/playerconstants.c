modded class PlayerConstants
{	
	
	static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.0;        //shoe damage per step
	static const int CHECK_EVERY_N_STEP				  = 100;		//will process every n-th step(for performance reasons)

	static const float CHANCE_TO_BLEED_SLIDING_LADDER_PER_SEC = 0.0; // probability of bleeding source occuring while sliding down ladder without gloves given as percentage per second(0.5 means 50% chance bleeding source will happen every second while sliding down) 
	static const float GLOVES_DAMAGE_SLIDING_LADDER_PER_SEC = 0;// how much damage the gloves receive while sliding down the ladder (per sec)

}
