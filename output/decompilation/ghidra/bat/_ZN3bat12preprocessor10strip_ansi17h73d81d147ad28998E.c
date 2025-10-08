void _ZN3bat12preprocessor10strip_ansi17h73d81d147ad28998E
               (undefined (*param_1) [16],long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined (*local_a0) [16];
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined4 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_a0 = param_1;
  local_b8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h2ab28548f23fa4abE
                       (param_3,1,1,&PTR_DAT_007cd180);
  puVar2 = 
  PTR__ZN102__LT_bat__vscreen__EscapeSequenceOffsetsIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h292aaa547b62c7bfE_008088c8
  ;
  local_a8 = 0;
  local_80 = param_2 + param_3;
  local_78 = 0;
  local_68 = 0x110001;
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_2;
  while( true ) {
    while( true ) {
                    /* try { // try from 0053e3a5 to 0053e3e8 has its CatchHandler @ 0053e430 */
      (*(code *)puVar2)(&local_60,&local_98);
      uVar4 = local_50;
      uVar3 = local_58;
      if (local_60 == 0) break;
      if ((int)local_60 == 5) {
        *(undefined8 *)local_a0[1] = local_a8;
        *local_a0 = local_b8;
        return;
      }
    }
    auVar6 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (local_58,local_50,param_2,param_3);
    lVar5 = auVar6._0_8_;
    if (lVar5 == 0) break;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
              (local_b8,lVar5,auVar6._8_8_ + lVar5);
  }
                    /* try { // try from 0053e413 to 0053e42d has its CatchHandler @ 0053e432 */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
            (param_2,param_3,uVar3,uVar4,&PTR_DAT_007ce990);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}