void _ZN6uu_env9print_env17h67417add1e73f63aE(undefined param_1)

{
  undefined8 uVar1;
  undefined local_159;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e0;
  code *local_d8;
  undefined4 *local_d0;
  code *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_159 = param_1;
  local_150 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_158 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_150);
                    /* try { // try from 001cbfb1 to 001cbfbe has its CatchHandler @ 001cc123 */
  _ZN3std3env4vars17h104f59bf3851ffdbE(&local_50);
  local_f8 = local_40;
  uStack_f0 = uStack_38;
  local_108 = local_50;
  uStack_104 = uStack_4c;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  while( true ) {
                    /* try { // try from 001cc000 to 001cc012 has its CatchHandler @ 001cc146 */
    _ZN73__LT_std__env__Vars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0b476a668b5d347eE
              (&local_80,&local_108);
    if (local_80 == -0x8000000000000000) break;
    local_138 = local_70;
    local_148 = local_80;
    uStack_140 = uStack_78;
    local_118 = local_58;
    local_128 = local_68;
    uStack_124 = uStack_64;
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    local_d8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_c8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_c0 = &local_159;
    local_b8 = 
    _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
    ;
    local_b0 = &DAT_002487c0;
    local_a8 = 3;
    local_90 = 0;
    local_a0 = &local_e0;
    local_98 = 3;
    local_e0 = &local_148;
    local_d0 = &local_128;
                    /* try { // try from 001cc0d5 to 001cc0e7 has its CatchHandler @ 001cc12d */
    uVar1 = _ZN3std2io5Write9write_fmt17hca08ab08a7c7b592E(&local_158,&local_b0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h06c9544b27cec57dE(uVar1);
                    /* try { // try from 001cc0e8 to 001cc0ef has its CatchHandler @ 001cc128 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc60ce05406126818E(&local_128);
                    /* try { // try from 001cc0f0 to 001cc0f7 has its CatchHandler @ 001cc146 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc60ce05406126818E(&local_148);
  }
                    /* try { // try from 001cc0fd to 001cc106 has its CatchHandler @ 001cc123 */
  _ZN4core3ptr35drop_in_place_LT_std__env__Vars_GT_17hec98998f7d042e09E(&local_108);
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h80708a336f9a43e5E(local_158);
  return;
}