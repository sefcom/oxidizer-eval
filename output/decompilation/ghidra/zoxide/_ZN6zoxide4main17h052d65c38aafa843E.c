ulong _ZN6zoxide4main17h052d65c38aafa843E(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_c0;
  char local_b8;
  byte local_b7;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 *local_98;
  undefined *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_58 [80];
  
  _ZN3std3env10remove_var17h2e8df9aa3cb8d6b6E("RUST_LIB_BACKTRACE",0x12);
  _ZN3std3env10remove_var17h2e8df9aa3cb8d6b6E("RUST_BACKTRACE\' wasn\'t recognized",0xe);
  _ZN12clap_builder6derive6Parser5parse17h7c59585d5d69ad43E(local_58);
                    /* try { // try from 00193ec7 to 00193ee4 has its CatchHandler @ 00193fad */
  lVar1 = _ZN58__LT_zoxide__cmd__cmd__Cmd_u20_as_u20_zoxide__cmd__Run_GT_3run17h9c459d8ce607258aE
                    (local_58);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_8downcast17h1c453138b475fd5eE(&local_b8,lVar1);
    if (local_b8 == '\x01') {
      local_c0 = local_b0;
      local_a0 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_0023b9d8;
      local_98 = &local_c0;
      local_90 = 
      PTR__ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h45dbd11a91a596ceE_0023b9e0
      ;
      local_88 = &PTR_s_zoxide__00234cb0;
      local_80 = 2;
      local_68 = 0;
      local_78 = &local_98;
      local_70 = 1;
                    /* try { // try from 00193f4d to 00193f6b has its CatchHandler @ 00193f98 */
      local_a8 = (*(code *)
                   PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_0023b9e8
                 )(&local_a0,&local_88);
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h29a4fc21488b4033E
                (&local_a8);
                    /* try { // try from 00193f6c to 00193f75 has its CatchHandler @ 00193fad */
      _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17h20a3619e4651cb22E(&local_c0);
      uVar2 = CONCAT71((int7)((ulong)local_58 >> 8),1);
    }
    else {
      uVar2 = (ulong)local_b7;
    }
  }
  _ZN4core3ptr42drop_in_place_LT_zoxide__cmd__cmd__Cmd_GT_17h1183555263919549E(local_58);
  return uVar2 & 0xffffffff;
}