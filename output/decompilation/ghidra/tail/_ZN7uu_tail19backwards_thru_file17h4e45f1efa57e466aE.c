void _ZN7uu_tail19backwards_thru_file17h4e45f1efa57e466aE
               (undefined8 param_1,ulong param_2,char param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined auVar6 [16];
  long local_f0;
  long local_e8;
  long local_e0;
  char local_d8;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined local_d1;
  ulong local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  char local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined local_a9;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined local_80 [32];
  undefined8 local_60 [6];
  
  local_d0 = 0;
  local_a8 = param_1;
  local_a0 = param_2;
  (*(code *)PTR__ZN7uu_tail6chunks13ReverseChunks3new17h6119ac2ef47f2bfcE_0027d7b8)(local_80);
  (*(code *)
    PTR__ZN89__LT_uu_tail__chunks__ReverseChunks_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1198ad157f2d09d4E_0027d7d8
  )(&local_98,local_80);
  uVar5 = 0;
  bVar4 = false;
  do {
    lVar3 = local_90;
    lVar2 = local_98;
    local_e0 = local_90 + local_88;
    local_f0 = local_90;
    local_e8 = local_90;
    local_d8 = param_3;
    if ((local_88 != 0 && !bVar4) && (*(char *)(local_e0 + -1) == param_3)) {
                    /* try { // try from 001a7775 to 001a7783 has its CatchHandler @ 001a789d */
      _ZN6memchr4arch7generic6memchr4Iter9next_back17h8b6e16488b52dba2E(&local_f0,&local_d8);
    }
    local_b8 = local_e0;
    local_b0 = local_d8;
    local_af = local_d7;
    local_ab = local_d3;
    local_a9 = local_d1;
    local_c8 = local_f0;
    local_c0 = local_e8;
    while( true ) {
                    /* try { // try from 001a77d0 to 001a77da has its CatchHandler @ 001a789f */
      auVar6 = _ZN6memchr4arch7generic6memchr4Iter9next_back17h8b6e16488b52dba2E
                         (&local_c8,&local_b0);
      if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      uVar5 = uVar5 + 1;
      local_d0 = uVar5;
      if (param_2 <= uVar5) {
        if (uVar5 == param_2) {
                    /* try { // try from 001a782c to 001a789a has its CatchHandler @ 001a78a1 */
          auVar6 = (*(code *)
                     PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_0027d7c8
                   )(local_a8,2,auVar6._8_8_ + 1);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hada310c9832e5020E
                    (auVar6._0_8_,auVar6._8_8_,&PTR_DAT_00273b88);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd2297b40d9b55d99E
                    (lVar2,lVar3);
          return;
        }
        local_60[0] = 0;
        (*(code *)PTR__ZN4core9panicking13assert_failed17h44a849fd8057adffE_0027d7e8)
                  (0,&local_d0,&local_a0,local_60,&PTR_DAT_00273b70);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd2297b40d9b55d99E(lVar2,lVar3);
    (*(code *)
      PTR__ZN89__LT_uu_tail__chunks__ReverseChunks_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1198ad157f2d09d4E_0027d7d8
    )(&local_98,local_80);
    bVar4 = true;
    if (local_98 == -0x8000000000000000) {
      return;
    }
  } while( true );
}