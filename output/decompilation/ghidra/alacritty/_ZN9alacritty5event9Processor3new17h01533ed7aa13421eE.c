void _ZN9alacritty5event9Processor3new17h01533ed7aa13421eE
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined *local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 local_738;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined local_708 [176];
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  
                    /* try { // try from 0054ffbd to 0054ffcc has its CatchHandler @ 005504d0 */
  _ZN5winit13platform_impl5linux18EventLoop_LT_T_GT_12create_proxy17h9050477dda0b9974E
            (&local_658,param_4);
  local_838 = local_648;
  uStack_834 = uStack_644;
  uStack_830 = uStack_640;
  uStack_82c = uStack_63c;
  local_848 = (undefined4)local_658;
  uStack_844 = local_658._4_4_;
  uStack_840 = (undefined4)uStack_650;
  uStack_83c = uStack_650._4_4_;
                    /* try { // try from 0054ffe7 to 0054fff8 has its CatchHandler @ 005504c8 */
  _ZN91__LT_winit__platform_impl__linux__EventLoopProxy_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf017a78d33b24d45E
            (&local_658,&local_848);
  local_808 = local_648;
  uStack_804 = uStack_644;
  uStack_800 = uStack_640;
  uStack_7fc = uStack_63c;
  local_818 = local_658;
  uStack_810 = uStack_650;
  local_7f8 = 0;
  uStack_7f0 = 0x10;
  local_7e8 = 0;
  uStack_7e0 = 0;
                    /* try { // try from 00550039 to 00550048 has its CatchHandler @ 005504c3 */
  _ZN68__LT_alacritty__cli__WindowOptions_u20_as_u20_core__clone__Clone_GT_5clone17hba3875afb1d1f31cE
            (&local_658,param_3);
  (*(code *)PTR_memcpy_009de0b0)(local_708,&local_658,0xb0);
                    /* try { // try from 00550064 to 005500b3 has its CatchHandler @ 005504d5 */
  _ZN5winit10event_loop18EventLoop_LT_T_GT_20listen_device_events17hf09e832e2259babaE(param_4);
  _ZN103__LT_winit__event_loop__EventLoop_LT_T_GT__u20_as_u20_raw_window_handle__borrowed__HasDisplayHandle_GT_14display_handle17h6bb5824f2b2c3041E
            (&local_658,param_4);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8eb3c721dc814788E
            (&local_228,&local_658,&PTR_DAT_00982878);
  _ZN9alacritty9clipboard9Clipboard3new17h057223b09dc81a04E
            (&local_7d8,local_228,CONCAT44(uStack_21c,uStack_220));
  local_888 = 2;
  uVar2 = *(uint *)(param_2 + 0x418);
  if ((char)uVar2 == '\x02') {
    uVar2 = *(uint *)(param_2 + 0x40);
  }
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 005500df to 005500eb has its CatchHandler @ 00550416 */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h6230c7fcda3c6588E
              (&local_7b8,*(undefined8 *)(param_2 + 0x2a0),*(undefined8 *)(param_2 + 0x2a8));
                    /* try { // try from 005500ec to 005500fb has its CatchHandler @ 00550404 */
    _ZN5winit13platform_impl5linux18EventLoop_LT_T_GT_12create_proxy17h9050477dda0b9974E
              (&local_658,param_4);
    local_218 = local_648;
    uStack_214 = uStack_644;
    uStack_210 = uStack_640;
    uStack_20c = uStack_63c;
    local_228 = (undefined4)local_658;
    uStack_224 = local_658._4_4_;
    uStack_220 = (undefined4)uStack_650;
    uStack_21c = uStack_650._4_4_;
                    /* try { // try from 0055011c to 00550138 has its CatchHandler @ 00550402 */
    _ZN9alacritty6config7monitor13ConfigMonitor3new17h96fda481c32d2708E
              (&local_658,&local_7b8,&local_228);
                    /* try { // try from 00550139 to 00550140 has its CatchHandler @ 005503ca */
    _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_alacritty__config__monitor__ConfigMonitor_GT__GT_17hc17f70ca91879034E
              (&local_888);
    local_858 = local_628;
    local_878 = CONCAT44(uStack_644,local_648);
    uStack_870 = CONCAT44(uStack_63c,uStack_640);
    local_868 = local_638;
    uStack_860 = uStack_630;
    local_888 = local_658;
    uStack_880 = (undefined4)uStack_650;
    uStack_87c = uStack_650._4_4_;
  }
  puVar1 = PTR_memcpy_009de0b0;
  (*(code *)PTR_memcpy_009de0b0)(&local_228,param_3,0x1f0);
  local_728 = CONCAT44(uStack_844,local_848);
  uStack_720 = CONCAT44(uStack_83c,uStack_840);
  local_718 = CONCAT44(uStack_834,local_838);
  uStack_710 = CONCAT44(uStack_82c,uStack_830);
  local_788 = (undefined4)local_7e8;
  uStack_784 = local_7e8._4_4_;
  uStack_780 = (undefined4)uStack_7e0;
  uStack_77c = uStack_7e0._4_4_;
  local_798 = (undefined4)local_7f8;
  uStack_794 = local_7f8._4_4_;
  uStack_790 = (undefined4)uStack_7f0;
  uStack_78c = uStack_7f0._4_4_;
  local_7a8 = local_808;
  uStack_7a4 = uStack_804;
  uStack_7a0 = uStack_800;
  uStack_79c = uStack_7fc;
  local_7b8 = (undefined4)local_818;
  uStack_7b4 = local_818._4_4_;
  uStack_7b0 = (undefined4)uStack_810;
  uStack_7ac = uStack_810._4_4_;
  local_738 = 2;
  local_658 = 1;
  uStack_650 = 1;
  (*(code *)puVar1)(&local_648,param_2,0x420);
                    /* try { // try from 0055021c to 00550228 has its CatchHandler @ 00550440 */
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4b5907c012952b91E(&local_658);
                    /* try { // try from 00550231 to 0055023d has its CatchHandler @ 00550421 */
  local_820 = uVar3;
  _ZN5ahash12random_state11RandomState3new17hccae9c0b71bdd92eE(&local_658);
  local_748 = local_648;
  uStack_744 = uStack_644;
  uStack_740 = uStack_640;
  uStack_73c = uStack_63c;
  local_758 = local_658;
  uStack_750 = uStack_650;
  local_778 = PTR_DAT_00975358;
  uStack_770 = _UNK_00975360;
  local_768 = _DAT_00975368;
  uStack_760 = _UNK_00975370;
  *(undefined8 *)(param_1 + 0xec) = local_858;
  *(undefined8 *)(param_1 + 0xe8) = local_868;
  *(undefined8 *)(param_1 + 0xea) = uStack_860;
  *(undefined8 *)(param_1 + 0xe4) = local_878;
  *(undefined8 *)(param_1 + 0xe6) = uStack_870;
  *(undefined8 *)(param_1 + 0xe0) = local_888;
  *(ulong *)(param_1 + 0xe2) = CONCAT44(uStack_87c,uStack_880);
  *(undefined8 *)(param_1 + 200) = local_7c8;
  *(undefined8 *)(param_1 + 0xca) = uStack_7c0;
  *(undefined8 *)(param_1 + 0xc4) = local_7d8;
  *(undefined8 *)(param_1 + 0xc6) = uStack_7d0;
  param_1[0xc] = (undefined4)local_7e8;
  param_1[0xd] = local_7e8._4_4_;
  param_1[0xe] = (undefined4)uStack_7e0;
  param_1[0xf] = uStack_7e0._4_4_;
  param_1[8] = (undefined4)local_7f8;
  param_1[9] = local_7f8._4_4_;
  param_1[10] = (undefined4)uStack_7f0;
  param_1[0xb] = uStack_7f0._4_4_;
  param_1[4] = local_808;
  param_1[5] = uStack_804;
  param_1[6] = uStack_800;
  param_1[7] = uStack_7fc;
  *param_1 = (undefined4)local_818;
  param_1[1] = local_818._4_4_;
  param_1[2] = (undefined4)uStack_810;
  param_1[3] = uStack_810._4_4_;
  (*(code *)puVar1)(param_1 + 0x98,local_708,0xb0);
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined **)(param_1 + 0xcc) = local_778;
  *(undefined8 *)(param_1 + 0xce) = uStack_770;
  *(undefined8 *)(param_1 + 0xd0) = local_768;
  *(undefined8 *)(param_1 + 0xd2) = uStack_760;
  param_1[0xd4] = (undefined4)local_758;
  param_1[0xd5] = local_758._4_4_;
  param_1[0xd6] = (undefined4)uStack_750;
  param_1[0xd7] = uStack_750._4_4_;
  param_1[0xd8] = local_748;
  param_1[0xd9] = uStack_744;
  param_1[0xda] = uStack_740;
  param_1[0xdb] = uStack_73c;
  param_1[0x14] = local_838;
  param_1[0x15] = uStack_834;
  param_1[0x16] = uStack_830;
  param_1[0x17] = uStack_82c;
  param_1[0x10] = local_848;
  param_1[0x11] = uStack_844;
  param_1[0x12] = uStack_840;
  param_1[0x13] = uStack_83c;
  *(undefined8 *)(param_1 + 0x18) = 2;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 8;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  (*(code *)puVar1)(param_1 + 0x1c,&local_228,0x1f0);
  *(undefined8 *)(param_1 + 0xf4) = uVar3;
  return;
}