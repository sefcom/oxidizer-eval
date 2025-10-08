__int64 __fastcall uu_rm::clean_trailing_slashes(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  _QWORD v7[3]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v2 = a1;
  v7[1] = a1;
  v7[2] = a2;
  v7[0] = 0LL;
  if ( a2 >= 2 && *(_BYTE *)(a1 + a2 - 1) == 47 )
  {
    v3 = a2;
    while ( v3 > 1 )
    {
      v4 = v3 - 1;
      if ( *(_BYTE *)(a1 + v3-- - 2) != 47 )
        goto LABEL_8;
    }
    v4 = a2 - 1;
LABEL_8:
    v8[0] = 0LL;
    v8[1] = v4;
    v9 = 0;
    v2 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, a1, a2, v3);
  }
  core::ptr::drop_in_place<core::result::Result<&[u8],alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v7);
  return v2;
}