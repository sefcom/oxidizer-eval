__int64 __fastcall uu_uniq::handle_extract_obs_skip_fields(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  char v8; // [rsp+Eh] [rbp-AAh] BYREF
  char v9; // [rsp+Fh] [rbp-A9h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-A0h]
  __int64 v12; // [rsp+20h] [rbp-98h]
  __int64 v13; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+30h] [rbp-88h]
  unsigned __int64 v15; // [rsp+38h] [rbp-80h]
  __int128 v16; // [rsp+40h] [rbp-78h] BYREF
  char *v17; // [rsp+50h] [rbp-68h]
  char *v18; // [rsp+58h] [rbp-60h]
  __int64 *v19; // [rsp+60h] [rbp-58h]
  __int128 v20; // [rsp+68h] [rbp-50h] BYREF
  __int64 v21; // [rsp+78h] [rbp-40h]
  __int128 v22; // [rsp+80h] [rbp-38h] BYREF
  __int64 v23; // [rsp+90h] [rbp-28h]

  v10 = 0LL;
  v11 = 4LL;
  v12 = 0LL;
  v9 = 0;
  v8 = 0;
  *(_QWORD *)&v16 = a2;
  *((_QWORD *)&v16 + 1) = a2 + a3;
  v17 = &v8;
  v18 = &v9;
  v19 = &v10;
  core::iter::traits::iterator::Iterator::collect(&v13, &v16);
  if ( !v12 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, a2, a3);
    *(_QWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
    goto LABEL_10;
  }
  if ( !v8 )
  {
    core::iter::traits::iterator::Iterator::collect(&v20, v11, v11 + 4 * v12);
    if ( *a4 != 0x8000000000000000LL )
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v20,
        a4[1],
        a4[1] + a4[2]);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    a4[2] = v21;
    *(_OWORD *)a4 = v20;
    v6 = v15;
    if ( v15 > 1 )
      goto LABEL_4;
LABEL_9:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_10;
  }
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
  *a4 = 0x8000000000000000LL;
  v6 = v15;
  if ( v15 <= 1 )
    goto LABEL_9;
LABEL_4:
  core::iter::traits::iterator::Iterator::collect(&v22, v14, v14 + 4 * v6);
  *(_QWORD *)(a1 + 16) = v23;
  *(_OWORD *)a1 = v22;
LABEL_10:
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(v13, v14);
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(v10, v11);
}