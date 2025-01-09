undefined8 * __rustcall uu_du::read_block_size(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 != 0) {
    uucore::parser::parse_size::parse_size_u64(local_c8);
    if (local_c8[0] == 3) {
      ppuVar4 = (undefined **)CONCAT44(uStack_bc,uStack_c0);
      uVar3 = 0;
    }
    else {
      uVar3 = read_block_size::___closure__(param_2,param_3,&local_a8);
      ppuVar4 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00284310;
    }
    param_1[1] = ppuVar4;
    *param_1 = uVar3;
    return param_1;
  }
  local_a8 = &DAT_0011cd1d;
  uStack_a0 = 0xd;
  local_98 = &DAT_0011cd2a;
  uStack_90 = 10;
  local_88 = &DAT_0011cd34;
  local_80 = 9;
  local_78 = 0;
  local_70 = 3;
LAB_001f1de8:
  lVar2 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                    (&local_a8);
  if (lVar2 == 0) {
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&local_a8);
    std::env::var(&local_a8,&DAT_0011cd3d,0xf);
    puVar1 = local_a8;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_a8);
    if (puVar1 != (undefined *)0x0) {
      param_1[1] = 0x400;
      *param_1 = 0;
      return param_1;
    }
    param_1[1] = 0x200;
    *param_1 = 0;
    return param_1;
  }
  std::env::var(&local_50,lVar2);
  if (local_50 == 0) goto code_r0x001f1e0c;
  goto LAB_001f1de0;
code_r0x001f1e0c:
  local_58 = local_38;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
                    /* try { // try from 001f1e23 to 001f1e3a has its CatchHandler @ 001f1f3d */
  uucore::parser::parse_size::parse_size_u64(local_c8,CONCAT44(uStack_3c,uStack_40));
  if (local_c8[0] == 3) {
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    *param_1 = 0;
                    /* try { // try from 001f1eec to 001f1ef3 has its CatchHandler @ 001f1f36 */
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
              (local_c8);
                    /* try { // try from 001f1ef4 to 001f1efd has its CatchHandler @ 001f1f31 */
    core::ptr::drop_in_place<alloc::string::String>(&local_68);
    if (local_50 != 0) {
                    /* try { // try from 001f1f06 to 001f1f0f has its CatchHandler @ 001f1f2f */
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                (&local_50);
    }
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&local_a8);
    return param_1;
  }
  core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
            (local_c8);
                    /* try { // try from 001f1e3b to 001f1e44 has its CatchHandler @ 001f1f38 */
  core::ptr::drop_in_place<alloc::string::String>(&local_68);
  if (local_50 != 0) {
LAB_001f1de0:
                    /* try { // try from 001f1de0 to 001f1e03 has its CatchHandler @ 001f1f5e */
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_50);
  }
  goto LAB_001f1de8;
}