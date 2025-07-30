void _ZN7spyware7actions8commands11run_command17ha7c0eb7cdcbdbc69E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = &local_58;
  local_40 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h412b806372427b66E;
  local_38 = &DAT_00111890;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
  local_58 = param_2;
  local_50 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h31b26472792d6da3E(local_70,&local_38);
                    /* try { // try from 001599d2 to 001599da has its CatchHandler @ 001599eb */
  (*(code *)PTR__ZN7cmd_lib7run_fun17h9f2bb5bf4eacc382E_001be8e0)(param_1,local_68,local_60);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h46afe0b9deda2fc5E(local_70);
  return;
}