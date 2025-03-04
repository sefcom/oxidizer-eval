__int64 __fastcall uu_ls::display_additional_leading_info(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *metadata; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // al
  _DWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  __int64 result; // rax
  __int128 v23; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD **v24; // [rsp+10h] [rbp-B8h]
  __int128 v25; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD **v26; // [rsp+30h] [rbp-98h]
  __int64 v27; // [rsp+38h] [rbp-90h]
  __int64 v28; // [rsp+40h] [rbp-88h]
  __int128 v29; // [rsp+50h] [rbp-78h] BYREF
  __int64 v30; // [rsp+60h] [rbp-68h]
  _QWORD *v31; // [rsp+68h] [rbp-60h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+70h] [rbp-58h]
  _QWORD v33[3]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v34; // [rsp+90h] [rbp-38h]

  v34 = a4;
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v29 + 1) = 1LL;
  v30 = 0LL;
  if ( *(_BYTE *)(a5 + 233) )
  {
    metadata = uu_ls::PathData::get_metadata(a2, a6);
    if ( metadata )
    {
      uu_ls::get_inode((__int64)&v23, *((_QWORD *)metadata + 5), v10, v11, v12, v13);
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, asc_3623A, 1LL);
      v24 = v26;
      v23 = v25;
    }
    uu_ls::pad_left((__int64)v33, *((__int64 *)&v23 + 1), (__int64)v24, a3, v14, v15);
    v31 = v33;
    v32 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v25 = &unk_2125E8;
    *((_QWORD *)&v25 + 1) = 2LL;
    v28 = 0LL;
    v26 = &v31;
    v27 = 1LL;
    v16 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v29, &v25);
    core::result::Result<T,E>::unwrap(v16, &off_212608);
    core::ptr::drop_in_place<alloc::string::String>(v33);
    core::ptr::drop_in_place<alloc::string::String>(&v23);
  }
  if ( *(_BYTE *)(a5 + 234) )
  {
    v17 = uu_ls::PathData::get_metadata(a2, a6);
    if ( v17 )
    {
      uu_ls::get_block_size(v17[14], *((_QWORD *)v17 + 12), *(_QWORD *)(a5 + 216), *(_BYTE *)(a5 + 241));
      uu_ls::display_size();
      if ( *(_BYTE *)(a5 + 248) == 4 )
      {
LABEL_9:
        v33[0] = &v23;
        v33[1] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v25 = &unk_2125E8;
        *((_QWORD *)&v25 + 1) = 2LL;
        v28 = 0LL;
        v26 = (_QWORD **)v33;
        v27 = 1LL;
        v20 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v29, &v25);
        core::result::Result<T,E>::unwrap(v20, &off_212620);
LABEL_12:
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        goto LABEL_13;
      }
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, asc_3623A, 1LL);
      v24 = v26;
      v23 = v25;
      if ( *(_BYTE *)(a5 + 248) == 4 )
        goto LABEL_9;
    }
    uu_ls::pad_left((__int64)v33, *((__int64 *)&v23 + 1), (__int64)v24, v34, v18, v19);
    v31 = v33;
    v32 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v25 = &unk_2125E8;
    *((_QWORD *)&v25 + 1) = 2LL;
    v28 = 0LL;
    v26 = &v31;
    v27 = 1LL;
    v21 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v29, &v25);
    core::result::Result<T,E>::unwrap(v21, &off_212638);
    core::ptr::drop_in_place<alloc::string::String>(v33);
    goto LABEL_12;
  }
LABEL_13:
  result = v30;
  *(_QWORD *)(a1 + 16) = v30;
  *(_OWORD *)a1 = v29;
  return result;
}
