void __rustcall uu_head::arg_iterate(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined local_d0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined local_60 [16];
  undefined8 local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_1a8 = param_2;
  local_1a0 = param_3;
  _<core::iter::adapters::cloned::Cloned<I>as_core::iter::traits::iterator::Iterator>::next
            (&local_198,&local_1a8);
  if (local_198 == (undefined **)0x8000000000000000) {
    (*(code *)PTR_unwrap_failed_00231408)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0022abe0);
  }
  else {
    local_128 = local_188;
    local_138 = (undefined4)local_198;
    uStack_134 = local_198._4_4_;
    uStack_130 = (undefined4)uStack_190;
    uStack_12c = uStack_190._4_4_;
                    /* try { // try from 0016c386 to 0016c395 has its CatchHandler @ 0016c89f */
    _<core::iter::adapters::cloned::Cloned<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_120,&local_1a8);
    if (CONCAT44(uStack_11c,local_120) != -0x8000000000000000) {
      local_a8 = local_120;
      uStack_a4 = uStack_11c;
      uStack_a0 = uStack_118;
      uStack_9c = uStack_114;
      local_98 = local_110;
                    /* try { // try from 0016c3cf to 0016c41e has its CatchHandler @ 0016c8ae */
      (*(code *)PTR_try_from_002313f0)(&local_198,CONCAT44(uStack_114,uStack_118));
      puVar5 = local_188;
      if (local_198 == (undefined **)0x0) {
                    /* try { // try from 0016c4fa to 0016c50d has its CatchHandler @ 0016c8ae */
        (*(code *)PTR_parse_obsolete_002313f8)(&local_88,uStack_190,local_188);
        if (local_88 == 0) {
          puVar5 = (undefined8 *)::alloc::alloc::Global::alloc_impl(0x30);
          if (puVar5 != (undefined8 *)0x0) {
            local_188 = (undefined8 *)local_98;
            local_198 = (undefined **)CONCAT44(uStack_a4,local_a8);
            uStack_190 = CONCAT44(uStack_9c,uStack_a0);
            puVar5[2] = local_128;
            *puVar5 = CONCAT44(uStack_134,local_138);
            puVar5[1] = CONCAT44(uStack_12c,uStack_130);
            *(undefined4 *)(puVar5 + 3) = local_a8;
            *(undefined4 *)((long)puVar5 + 0x1c) = uStack_a4;
            *(undefined4 *)(puVar5 + 4) = uStack_a0;
            *(undefined4 *)((long)puVar5 + 0x24) = uStack_9c;
            puVar5[5] = local_98;
            ::alloc::slice::hack::into_vec(&local_198,puVar5,2);
            _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                      (&local_e8,&local_198);
            core::iter::traits::iterator::Iterator::chain(&local_198,&local_e8,local_1a8,local_1a0);
            uVar3 = ::alloc::boxed::Box<T>::new(&local_198);
            param_1[1] = uVar3;
            param_1[2] = &
                         PTR_drop_in_place<core_iter_adapters_chain_Chain<alloc_vec_into_iter_IntoIter<std_ffi_os_str_OsString>,core_iter_adapters_cloned_Cloned<core_slice_iter_Iter<std_ffi_os_str_OsString>>>>_0022abf8
            ;
            *param_1 = 0;
            return;
          }
                    /* try { // try from 0016c874 to 0016c883 has its CatchHandler @ 0016c8ae */
          (*(code *)PTR_handle_alloc_error_002313c8)(8,0x30);
          goto LAB_0016c884;
        }
        if (CONCAT44(uStack_7c,local_80) != 0) {
          local_f8 = local_70;
          uStack_f4 = uStack_6c;
          uStack_f0 = uStack_68;
          uStack_ec = uStack_64;
          local_108 = (undefined8 *)CONCAT44(uStack_7c,local_80);
          uStack_100 = (undefined *)CONCAT44(uStack_74,uStack_78);
          puVar4 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
          if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 0016c862 to 0016c871 has its CatchHandler @ 0016c88d */
            (*(code *)PTR_handle_alloc_error_002313c8)(8,0x18);
            goto LAB_0016c884;
          }
          *(undefined8 *)(puVar4 + 4) = local_128;
          *puVar4 = local_138;
          puVar4[1] = uStack_134;
          puVar4[2] = uStack_130;
          puVar4[3] = uStack_12c;
                    /* try { // try from 0016c574 to 0016c588 has its CatchHandler @ 0016c88d */
          ::alloc::slice::hack::into_vec(&local_e8,puVar4,1);
          _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                    (&local_198,&local_e8);
          core::iter::traits::iterator::Iterator::chain(&local_e8,&local_198,&local_108);
          core::iter::traits::iterator::Iterator::chain(&local_198,&local_e8,local_1a8,local_1a0);
                    /* try { // try from 0016c5d2 to 0016c5d9 has its CatchHandler @ 0016c886 */
          uVar3 = ::alloc::boxed::Box<T>::new(&local_198);
          param_1[1] = uVar3;
          param_1[2] = &
                       PTR_drop_in_place<core_iter_adapters_chain_Chain<core_iter_adapters_chain_Chain<alloc_vec_into_iter_IntoIter<std_ffi_os_str_OsString>,alloc_vec_into_iter_IntoIter<std_ffi_os_str_OsString>>,core_iter_adapters_cloned_Cloned<core_slice_iter_Iter<std_ffi_os_str_OsString>>>>_0022ac30
          ;
          *param_1 = 0;
          bVar2 = false;
          goto LAB_0016c438;
        }
        if ((char)uStack_78 == '\0') {
          local_e8 = 0;
          uStack_e0 = uStack_190;
          local_d8 = puVar5;
          local_d0 = 1;
          local_108 = &local_e8;
          uStack_100 = PTR_fmt_00231400;
          local_198 = &PTR_s_bad_argument_format__0022ac68;
          uStack_190 = 1;
          local_178 = 0;
          local_188 = &local_108;
          local_180 = 1;
          core::option::Option<T>::map_or_else(local_60,&local_198);
          local_180 = CONCAT44(local_180._4_4_,1);
          local_188 = (undefined8 *)local_50;
          uVar3 = ::alloc::boxed::Box<T>::new(&local_198);
        }
        else {
          local_e8 = 0;
          uStack_e0 = uStack_190;
          local_d8 = puVar5;
          local_d0 = 1;
          local_108 = &local_e8;
          uStack_100 = PTR_fmt_00231400;
          local_198 = &PTR_s_invalid_argument__Value_too_larg_0022ad20;
          uStack_190 = 2;
          local_178 = 0;
          local_188 = &local_108;
          local_180 = 1;
                    /* try { // try from 0016c740 to 0016c837 has its CatchHandler @ 0016c8ae */
          core::option::Option<T>::map_or_else(local_48,&local_198);
          local_180 = CONCAT44(local_180._4_4_,1);
          local_188 = (undefined8 *)local_38;
          uVar3 = ::alloc::boxed::Box<T>::new(&local_198);
        }
      }
      else {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_e8);
        local_188 = (undefined8 *)local_d8;
        local_180 = CONCAT44(local_180._4_4_,1);
        uVar3 = ::alloc::boxed::Box<T>::new(&local_198);
      }
      param_1[1] = uVar3;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0022acb0;
      *param_1 = 1;
      bVar2 = true;
LAB_0016c438:
                    /* try { // try from 0016c438 to 0016c444 has its CatchHandler @ 0016c8c3 */
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_a8);
      if (bVar2) {
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_138);
      }
      return;
    }
    puVar4 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar4 + 4) = local_128;
      *puVar4 = local_138;
      puVar4[1] = uStack_134;
      puVar4[2] = uStack_130;
      puVar4[3] = uStack_12c;
                    /* try { // try from 0016c486 to 0016c4b9 has its CatchHandler @ 0016c8c3 */
      ::alloc::slice::hack::into_vec(&local_e8,puVar4,1);
      _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                (&local_198,&local_e8);
      uVar3 = ::alloc::boxed::Box<T>::new(&local_198);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR_drop_in_place<alloc_vec_into_iter_IntoIter<std_ffi_os_str_OsString>>_0022ad40
      ;
      *param_1 = 0;
      if (CONCAT44(uStack_11c,local_120) == -0x8000000000000000) {
        return;
      }
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_120);
      return;
    }
  }
                    /* try { // try from 0016c84d to 0016c85c has its CatchHandler @ 0016c8c3 */
  (*(code *)PTR_handle_alloc_error_002313c8)(8,0x18);
LAB_0016c884:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}