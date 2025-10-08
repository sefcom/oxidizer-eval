undefined8 _ZN16fuel_core_keygen4main17h3dcaa71d48d5eb40E(void)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined local_28 [32];
  
  _ZN12clap_builder6derive6Parser5parse17h492cd61fcc8e4985E(local_28);
                    /* try { // try from 0018b8d2 to 0018b912 has its CatchHandler @ 0018b929 */
  _ZN16fuel_core_keygen7Command4exec17h7b13e9ffe44d0813E(&local_70,local_28);
  uVar1 = local_70;
  if (local_50 != '\x02') {
    local_30 = local_58;
    local_40 = local_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    local_48 = local_70;
    uVar1 = _ZN16fuel_core_keygen11print_value17h4e8c20a34f891badE(&local_48,local_50);
  }
  _ZN4core3ptr46drop_in_place_LT_fuel_core_keygen__Command_GT_17hfd94021fab8dc8baE(local_28);
  return uVar1;
}