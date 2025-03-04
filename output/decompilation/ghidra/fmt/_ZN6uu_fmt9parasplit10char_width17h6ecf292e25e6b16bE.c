byte _ZN6uu_fmt9parasplit10char_width17h6ecf292e25e6b16bE(uint param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 < 0xa0) {
    return 1;
  }
  uVar3 = param_1 >> 6 & 0x7f |
          (uint)(byte)_ZN13unicode_width6tables9charwidth8TABLES_017h9927800cfb1b784eE
                      [param_1 >> 0xd & 0xff] << 7;
  if (uVar3 < 0x980) {
    uVar3 = param_1 >> 2 & 0xf |
            (uint)(byte)(&_ZN13unicode_width6tables9charwidth8TABLES_117hf64be1200af1ea4dE)[uVar3]
            << 4;
    if (uVar3 < 0xee0) {
      bVar1 = (byte)(&_ZN13unicode_width6tables9charwidth8TABLES_217h404ee36796c04a74E)[uVar3] >>
              ((char)param_1 * '\x02' & 6U) & 3;
      bVar2 = 1;
      if (bVar1 != 3) {
        bVar2 = bVar1;
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
              ((ulong)uVar3,0xee0,&PTR_s__home_34r7hm4n__cargo_registry_s_002265a0);
  }
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
            ((ulong)uVar3,0x980,&PTR_s__home_34r7hm4n__cargo_registry_s_00226588);
}