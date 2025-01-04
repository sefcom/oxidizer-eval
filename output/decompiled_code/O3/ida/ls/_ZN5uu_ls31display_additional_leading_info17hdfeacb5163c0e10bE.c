        __int64 a6)
{
  _DWORD *metadata; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // al
  _DWORD *v13; // rax
  unsigned int v14; // ebp
  __int64 block_size; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  __int64 result; // rax
  __int128 v21; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD **v22; // [rsp+10h] [rbp-B8h]
  __int128 v23; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD **v24; // [rsp+30h] [rbp-98h]
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int128 v27; // [rsp+50h] [rbp-78h] BYREF
  __int64 v28; // [rsp+60h] [rbp-68h]
  _QWORD *v29; // [rsp+68h] [rbp-60h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+70h] [rbp-58h]
  _QWORD v31[3]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v32; // [rsp+90h] [rbp-38h]

  v32 = a4;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 1LL;
  v28 = 0LL;
  if ( *(_BYTE *)(a5 + 233) )
  {
    metadata = uu_ls::PathData::get_metadata(a2, a6);
    if ( metadata )
    {
      uu_ls::get_inode(&v21, *((_QWORD *)metadata + 5));
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v23, asc_3623A, 1LL);
      v22 = v24;
      v21 = v23;
    }
    uu_ls::pad_left((__int64)v31, *((__int64 *)&v21 + 1), (__int64)v22, a3, v10, v11);
    v29 = v31;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &unk_2125E8;
    *((_QWORD *)&v23 + 1) = 2LL;
    v26 = 0LL;
    v24 = &v29;
    v25 = 1LL;
    v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v27, &v23);
    core::result::Result<T,E>::unwrap(v12, &off_212608);
    core::ptr::drop_in_place<alloc::string::String>(v31);
    core::ptr::drop_in_place<alloc::string::String>(&v21);
  }
  if ( *(_BYTE *)(a5 + 234) )
  {
    v13 = uu_ls::PathData::get_metadata(a2, a6);
    if ( v13 )
    {
      v14 = *(unsigned __int8 *)(a5 + 241);
      block_size = uu_ls::get_block_size(
                     (unsigned int)v13[14],
                     *((_QWORD *)v13 + 12),
                     *(_QWORD *)(a5 + 216),
                     *(unsigned __int8 *)(a5 + 241));
      uu_ls::display_size(&v21, block_size, v14);
      if ( *(_BYTE *)(a5 + 248) == 4 )
      {
LABEL_9:
        v31[0] = &v21;
        v31[1] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v23 = &unk_2125E8;
        *((_QWORD *)&v23 + 1) = 2LL;
        v26 = 0LL;
        v24 = (_QWORD **)v31;
        v25 = 1LL;
        v18 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v27, &v23);
        core::result::Result<T,E>::unwrap(v18, &off_212620);
LABEL_12:
        core::ptr::drop_in_place<alloc::string::String>(&v21);
        goto LABEL_13;
      }
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v23, asc_3623A, 1LL);
      v22 = v24;
      v21 = v23;
      if ( *(_BYTE *)(a5 + 248) == 4 )
        goto LABEL_9;
    }
    uu_ls::pad_left((__int64)v31, *((__int64 *)&v21 + 1), (__int64)v22, v32, v16, v17);
    v29 = v31;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &unk_2125E8;
    *((_QWORD *)&v23 + 1) = 2LL;
    v26 = 0LL;
    v24 = &v29;
    v25 = 1LL;
    v19 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v27, &v23);
    core::result::Result<T,E>::unwrap(v19, &off_212638);
    core::ptr::drop_in_place<alloc::string::String>(v31);
    goto LABEL_12;
  }
LABEL_13:
  result = v28;
  *(_QWORD *)(a1 + 16) = v28;
  *(_OWORD *)a1 = v27;
  return result;
}
