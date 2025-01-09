undefined  [16] __rustcall
uu_factor::print_factors_str
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_e8;
  code *pcStack_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  auVar5 = core::str::_<impl_str>::trim_matches();
  (*(code *)PTR_from_str_radix_00293468)(&local_60,auVar5._0_8_,auVar5._8_8_,10);
  if (CONCAT44(uStack_5c,local_60) == -0x8000000000000000) {
    local_c8 = (*(code *)PTR_util_name_00293470)();
    puVar1 = PTR__eprint_00293478;
    pcStack_e0 = _<&T_as_core::fmt::Display>::fmt;
    local_128 = &DAT_0028ae20;
    uStack_120 = 2;
    local_108 = 0;
    local_110 = 1;
    local_118 = &local_e8;
    local_e8 = local_c8;
    (*(code *)PTR__eprint_00293478)(&local_128);
    local_c8._0_8_ = 0;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_c8._8_8_ = param_1;
    local_b8 = param_2;
    uVar2 = core::result::Result<T,E>::unwrap_err(&local_60);
    local_148 = CONCAT71(local_148._1_7_,uVar2);
    pcStack_e0 = (code *)PTR_fmt_00293480;
    local_d0 = PTR_fmt_00293488;
    local_128 = &DAT_0028ae40;
    uStack_120 = 3;
    local_108 = 0;
    local_110 = 2;
    local_118 = &local_e8;
    local_e8 = local_c8;
    local_d8 = (undefined *)&local_148;
    (*(code *)puVar1)(&local_128);
    (*(code *)PTR_set_exit_code_00293490)(1);
LAB_001a4094:
    uVar4 = 0;
  }
  else {
    local_88 = local_50;
    local_98 = local_60;
    uStack_94 = uStack_5c;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
                    /* try { // try from 001a40bb to 001a40c7 has its CatchHandler @ 001a433e */
    num_bigint::biguint::convert::_<impl_core::convert::From<u64>for_num_bigint::biguint::BigUint>::
    from(&local_48);
    local_128._0_4_ = local_48;
    local_128._4_4_ = uStack_44;
    uStack_120 = CONCAT44(uStack_3c,uStack_40);
    local_118 = (undefined8 *)local_38;
                    /* try { // try from 001a40f7 to 001a40fb has its CatchHandler @ 001a432f */
    cVar3 = num_bigint::biguint::cmp_slice(CONCAT44(uStack_8c,uStack_90),local_88,uStack_120);
    if (cVar3 == '\x01') {
                    /* try { // try from 001a4100 to 001a415b has its CatchHandler @ 001a433e */
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_128);
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_128,&local_98);
      local_d8 = (undefined *)local_118;
      local_e8 = (undefined *)CONCAT44(local_128._4_4_,(undefined4)local_128);
      pcStack_e0 = (code *)uStack_120;
      local_128._0_4_ = 2;
      local_128._4_4_ = 0;
      num_prime::nt_funcs::factors(local_c8,&local_e8,&local_128);
    }
    else {
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_128);
      local_c8._0_8_ = 0;
      local_b8 = 0;
      local_b0 = 0x8000000000000000;
    }
    local_68 = local_b8;
    local_78 = local_c8._0_8_;
    local_70 = local_c8._8_8_;
    local_138 = local_a0;
    local_148 = local_b0;
    local_140 = local_a8;
    if (local_b0 == 0x8000000000000000) {
      local_118 = (undefined8 *)local_b8;
      local_128 = (undefined *)local_c8._0_8_;
      uStack_120 = local_c8._8_8_;
                    /* try { // try from 001a41ff to 001a421f has its CatchHandler @ 001a431c */
      uVar4 = write_result(param_3,&local_98,&local_128,param_4);
      auVar5 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
               ::map_err_context(uVar4);
      if (auVar5._0_8_ == 0) {
                    /* try { // try from 001a42df to 001a42e6 has its CatchHandler @ 001a42f9 */
        core::ptr::
        drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>
                  (&local_148);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_98);
        goto LAB_001a4094;
      }
      if (local_148 != 0x8000000000000000) {
                    /* try { // try from 001a4239 to 001a4240 has its CatchHandler @ 001a42f9 */
        core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&local_148);
      }
    }
    else {
      local_d8 = (undefined *)local_a0;
      local_e8 = (undefined *)local_b0;
      pcStack_e0 = (code *)local_a8;
                    /* try { // try from 001a4260 to 001a4298 has its CatchHandler @ 001a4300 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_c8);
      local_118 = (undefined8 *)local_b8;
      local_128 = (undefined *)local_c8._0_8_;
      uStack_120 = local_c8._8_8_;
      local_110 = CONCAT44(local_110._4_4_,1);
      uVar4 = ::alloc::boxed::Box<T>::new(&local_128);
                    /* try { // try from 001a4299 to 001a42a5 has its CatchHandler @ 001a42fb */
      core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&local_e8);
                    /* try { // try from 001a42a6 to 001a42b2 has its CatchHandler @ 001a433e */
      core::ptr::
      drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>
                (&local_78);
      auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0028aea8;
      auVar5._0_8_ = uVar4;
    }
    param_2 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&local_98);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}