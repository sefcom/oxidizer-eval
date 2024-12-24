undefined8 * __rustcall uu_df::columns::Column::from_matches(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"print-type",10);
  cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"inodes",6);
  cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(param_2,"output",6);
  if (cVar3 == '\x03') {
    if (cVar1 == '\0') {
      if (cVar2 == '\0') goto LAB_001d0786;
LAB_001d05e6:
      puVar5 = (undefined4 *)::alloc::alloc::Global::alloc_impl(6);
      if (puVar5 == (undefined4 *)0x0) goto LAB_001d083f;
      *puVar5 = 0x8070600;
      *(undefined2 *)(puVar5 + 1) = 0x509;
LAB_001d07a5:
      uVar8 = 6;
      goto LAB_001d07ae;
    }
    if (cVar2 == '\0') goto LAB_001d0612;
LAB_001d05ae:
    puVar5 = (undefined4 *)::alloc::alloc::Global::alloc_impl(7);
    if (puVar5 == (undefined4 *)0x0) goto LAB_001d082f;
    *puVar5 = 0x7060b00;
    *(undefined2 *)(puVar5 + 1) = 0x908;
  }
  else {
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        if (cVar3 == '\x02') goto LAB_001d084f;
        goto LAB_001d05e6;
      }
      if (cVar3 == '\x02') {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&local_78,param_2);
        clap_builder::parser::error::MatchesError::unwrap(&local_b8,"output",6,&local_78);
        if (CONCAT44(uStack_b4,local_b8) == 0) {
          uVar8 = core::option::unwrap_failed(&PTR_s_src_uu_df_src_columns_rs_002429e0);
                    /* catch() { ... } // from try @ 001d0819 with catch @ 001d0875 */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_e8);
          puVar7 = (undefined8 *)_Unwind_Resume(uVar8);
          return puVar7;
        }
        local_48 = local_88;
        uStack_40 = uStack_80;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_78 = local_b8;
        uStack_74 = uStack_b4;
        uStack_70 = uStack_b0;
        uStack_6c = uStack_ac;
        local_e8 = 0;
        local_e0 = 8;
        local_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 1;
        local_c0 = 0;
        do {
                    /* try { // try from 001d0710 to 001d0783 has its CatchHandler @ 001d087c */
          lVar6 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                  ::next(&local_78);
          if (lVar6 == 0) {
            param_1[3] = local_c0;
            *(undefined4 *)(param_1 + 1) = (undefined4)local_d0;
            *(undefined4 *)((long)param_1 + 0xc) = local_d0._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_c8;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_c8._4_4_;
            *param_1 = 0;
LAB_001d0823:
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_e8);
            return param_1;
          }
          auVar9 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
                   call_once(*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
          local_f8 = auVar9;
          cVar1 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                            (local_f8,local_e0,local_d8);
          if (cVar1 != '\0') {
                    /* try { // try from 001d07f6 to 001d07ff has its CatchHandler @ 001d087a */
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_b8,local_f8._0_8_,local_f8._8_8_);
            param_1[3] = local_a8;
            *(undefined4 *)(param_1 + 1) = local_b8;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_b4;
            *(undefined4 *)(param_1 + 2) = uStack_b0;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_ac;
            *param_1 = 1;
                    /* try { // try from 001d0819 to 001d0822 has its CatchHandler @ 001d0875 */
            core::ptr::drop_in_place<alloc::vec::Vec<uu_df::columns::Column>>(&local_d0);
            goto LAB_001d0823;
          }
          ::alloc::vec::Vec<T,A>::push(&local_e8,local_f8._0_8_,local_f8._8_8_);
          uVar4 = parse(local_f8._0_8_,local_f8._8_8_);
          core::result::Result<T,E>::unwrap(uVar4);
          ::alloc::vec::Vec<T,A>::push(&local_d0,uVar4);
        } while( true );
      }
LAB_001d0786:
      puVar5 = (undefined4 *)::alloc::alloc::Global::alloc_impl(6);
      if (puVar5 == (undefined4 *)0x0) {
LAB_001d083f:
                    /* WARNING: Subroutine does not return */
        ::alloc::alloc::handle_alloc_error(1,6);
      }
      *puVar5 = 0x3020100;
      *(undefined2 *)(puVar5 + 1) = 0x504;
      goto LAB_001d07a5;
    }
    if (cVar2 != '\0') {
      if (cVar3 == '\x02') {
LAB_001d084f:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s_src_uu_df_src_columns_rs_00242a10);
      }
      goto LAB_001d05ae;
    }
    if (cVar3 == '\x02') goto LAB_001d084f;
LAB_001d0612:
    puVar5 = (undefined4 *)::alloc::alloc::Global::alloc_impl(7);
    if (puVar5 == (undefined4 *)0x0) {
LAB_001d082f:
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(1,7);
    }
    *puVar5 = 0x2010b00;
    *(undefined2 *)(puVar5 + 1) = 0x403;
  }
  *(undefined *)((long)puVar5 + 6) = 5;
  uVar8 = 7;
LAB_001d07ae:
  ::alloc::slice::hack::into_vec(param_1 + 1,puVar5,uVar8);
  *param_1 = 0;
  return param_1;
}