__int64 __fastcall uu_dircolors::generate_type_output(__int64 a1, _BYTE *a2)
{
  _BYTE v3[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h]
  __int64 v5; // [rsp+18h] [rbp-30h]
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( *a2 == 2 )
  {
    core::iter::traits::iterator::Iterator::collect(v3, &off_F68F8, &off_F68F8 + 108);
    alloc::str::join_generic_copy(&v6, v4, v5, asc_1C11E, 1LL);
  }
  else
  {
    core::iter::traits::iterator::Iterator::collect(v3, &off_F68F8, &off_F68F8 + 108);
    alloc::str::join_generic_copy(&v6, v4, v5, asc_1C11F, 1LL);
  }
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v3);
  return a1;
}