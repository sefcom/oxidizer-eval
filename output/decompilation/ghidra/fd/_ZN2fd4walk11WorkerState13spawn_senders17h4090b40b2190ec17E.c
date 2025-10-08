void _ZN2fd4walk11WorkerState13spawn_senders17h4090b40b2190ec17E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_4;
                    /* try { // try from 002f9271 to 002f927e has its CatchHandler @ 002f928d */
  _ZN6ignore4walk12WalkParallel3run17hcc819a1378359aebE(param_2,param_1,&local_18);
  _ZN4core3ptr78drop_in_place_LT_crossbeam_channel__channel__Sender_LT_fd__walk__Batch_GT__GT_17heb5d03ae888b17daE
            (&local_18);
  return;
}