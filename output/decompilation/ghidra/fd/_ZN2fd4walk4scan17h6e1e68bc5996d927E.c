void _ZN2fd4walk4scan17h6e1e68bc5996d927E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined local_240 [544];
  
  _ZN2fd4walk11WorkerState3new17h2df247c74afad7a8E(local_240,param_4,param_5);
                    /* try { // try from 002fa13a to 002fa14a has its CatchHandler @ 002fa164 */
  _ZN2fd4walk11WorkerState4scan17h5421ececa066738eE(param_1,local_240,param_2,param_3);
  _ZN4core3ptr42drop_in_place_LT_fd__walk__WorkerState_GT_17h929bd87c6832a50fE(local_240);
  return;
}