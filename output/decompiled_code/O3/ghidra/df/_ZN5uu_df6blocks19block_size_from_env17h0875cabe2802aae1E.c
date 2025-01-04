undefined  [16] __rustcall uu_df::blocks::block_size_from_env(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined auVar4 [16];
  long local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [2];
  undefined *local_30;
  
  plVar3 = &local_b8;
  local_78 = &DAT_001160ed;
  local_70 = 0xd;
  local_68 = &DAT_001160fa;
  local_60 = 10;
  local_58 = &DAT_00116104;
  local_50 = 9;
  local_48 = 0;
  local_40 = 3;
  do {
                    /* try { // try from 001d4b90 to 001d4bb6 has its CatchHandler @ 001d4c6e */
    lVar1 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                      (&local_78);
    if (lVar1 == 0) {
      core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&local_78);
      uVar2 = 0;
LAB_001d4c37:
      auVar4._8_8_ = plVar3;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    std::env::var(&local_b8,lVar1);
    if (local_b8 == 0) {
      local_88 = local_a0;
      local_98 = local_b0;
      uStack_94 = uStack_ac;
      uStack_90 = uStack_a8;
      uStack_8c = uStack_a4;
                    /* try { // try from 001d4be0 to 001d4c10 has its CatchHandler @ 001d4c50 */
      uucore::parser::parse_size::parse_size_u64(local_38,CONCAT44(uStack_a4,uStack_a8));
      core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
                (local_38);
                    /* try { // try from 001d4c11 to 001d4c1a has its CatchHandler @ 001d4c4b */
      core::ptr::drop_in_place<alloc::string::String>(&local_98);
      if (local_b8 != 0) {
                    /* try { // try from 001d4c22 to 001d4c29 has its CatchHandler @ 001d4c49 */
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                  (&local_b8);
      }
      uVar2 = (ulong)(local_38[0] == 3);
      core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&local_78);
      plVar3 = (long *)local_30;
      goto LAB_001d4c37;
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_b8);
  } while( true );
}