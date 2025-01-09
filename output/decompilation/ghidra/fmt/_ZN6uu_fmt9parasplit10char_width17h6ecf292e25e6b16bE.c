byte __rustcall uu_fmt::parasplit::char_width(uint param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 < 0xa0) {
    return 1;
  }
  uVar3 = param_1 >> 6 & 0x7f |
          (uint)(byte)unicode_width::tables::charwidth::TABLES_0[param_1 >> 0xd & 0xff] << 7;
  if (uVar3 < 0x980) {
    uVar3 = param_1 >> 2 & 0xf |
            (uint)(byte)(&unicode_width::tables::charwidth::TABLES_1)[uVar3] << 4;
    if (uVar3 < 0xee0) {
      bVar1 = (byte)(&unicode_width::tables::charwidth::TABLES_2)[uVar3] >>
              ((char)param_1 * '\x02' & 6U) & 3;
      bVar2 = 1;
      if (bVar1 != 3) {
        bVar2 = bVar1;
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              ((ulong)uVar3,0xee0,&PTR_s__home_34r7hm4n__cargo_registry_s_002265a0);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            ((ulong)uVar3,0x980,&PTR_s__home_34r7hm4n__cargo_registry_s_00226588);
}