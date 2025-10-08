undefined8
_ZN6zoxide3cmd5query70__LT_impl_u20_zoxide__cmd__Run_u20_for_u20_zoxide__cmd__cmd__Query_GT_3run17hbf87b54b3456bbcaE
          (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4open17ha2e4ec58863e42c6E
            (&local_50);
  if ((int)local_50 != 1) {
    local_58 = local_10;
    local_68 = local_20;
    uStack_64 = uStack_1c;
    uStack_60 = uStack_18;
    uStack_5c = uStack_14;
    local_78 = local_30;
    uStack_74 = uStack_2c;
    uStack_70 = uStack_28;
    uStack_6c = uStack_24;
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    local_90 = local_48;
                    /* try { // try from 0018fa11 to 0018fa1d has its CatchHandler @ 0018fa6b */
    uVar1 = _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_5query17hb4cde70ad6f18db1E
                      (param_1,&local_90);
                    /* try { // try from 0018fa26 to 0018fa2f has its CatchHandler @ 0018fa56 */
    local_50 = uVar1;
    uVar2 = _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4save17h965acf6a20fff002E
                      (&local_90);
                    /* try { // try from 0018fa30 to 0018fa3a has its CatchHandler @ 0018fa54 */
    local_48 = _ZN4core6result19Result_LT_T_C_E_GT_3and17hf4b2c15c697878c9E(uVar1,uVar2);
    _ZN4core3ptr66drop_in_place_LT_zoxide__db__ouroboros_impl_database__Database_GT_17h5b6619742b1f1539E
              (&local_90);
  }
  return local_48;
}