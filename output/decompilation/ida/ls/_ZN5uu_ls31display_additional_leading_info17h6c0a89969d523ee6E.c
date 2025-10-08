__int64 __fastcall uu_ls::display_additional_leading_info(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 metadata; // rax
  unsigned __int8 v10; // al
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 block_size; // rax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int64 result; // rax
  __int128 v17; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD **v18; // [rsp+10h] [rbp-B8h]
  __int128 v19; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD **v20; // [rsp+30h] [rbp-98h]
  __int64 v21; // [rsp+38h] [rbp-90h]
  __int64 v22; // [rsp+40h] [rbp-88h]
  __int128 v23; // [rsp+50h] [rbp-78h] BYREF
  __int64 v24; // [rsp+60h] [rbp-68h]
  _QWORD *v25; // [rsp+68h] [rbp-60h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+70h] [rbp-58h]
  _QWORD v27[3]; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-38h]

  v28 = a4;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 1LL;
  v24 = 0LL;
  if ( *(_BYTE *)(a5 + 241) )
  {
    metadata = uu_ls::PathData::get_metadata(a2, a6);
    if ( metadata )
    {
      uu_ls::get_inode(&v17, *(_QWORD *)(metadata + 40));
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v19, asc_D4206, 1LL);
      v18 = v20;
      v17 = v19;
    }
    uu_ls::pad_left((__int64)v27, *((__int64 *)&v17 + 1), (__int64)v18, a3);
    v25 = v27;
    v26 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &unk_286678;
    *((_QWORD *)&v19 + 1) = 2LL;
    v22 = 0LL;
    v20 = &v25;
    v21 = 1LL;
    v10 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v23, &v19);
    core::result::Result<T,E>::unwrap(v10, &off_286C18);
    core::ptr::drop_in_place<alloc::string::String>(v27);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  if ( *(_BYTE *)(a5 + 242) )
  {
    v11 = uu_ls::PathData::get_metadata(a2, a6);
    if ( v11 )
    {
      v12 = *(unsigned __int8 *)(a5 + 249);
      block_size = uu_ls::get_block_size(
                     *(unsigned int *)(v11 + 56),
                     *(_QWORD *)(v11 + 96),
                     *(_QWORD *)(a5 + 216),
                     *(unsigned __int8 *)(a5 + 249));
      uu_ls::display_size(&v17, block_size, v12);
      if ( *(_BYTE *)(a5 + 256) == 4 )
      {
LABEL_9:
        v27[0] = &v17;
        v27[1] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &unk_286678;
        *((_QWORD *)&v19 + 1) = 2LL;
        v22 = 0LL;
        v20 = (_QWORD **)v27;
        v21 = 1LL;
        v14 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v23, &v19);
        core::result::Result<T,E>::unwrap(v14, &off_286C30);
LABEL_12:
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        goto LABEL_13;
      }
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v19, asc_D4206, 1LL);
      v18 = v20;
      v17 = v19;
      if ( *(_BYTE *)(a5 + 256) == 4 )
        goto LABEL_9;
    }
    uu_ls::pad_left((__int64)v27, *((__int64 *)&v17 + 1), (__int64)v18, v28);
    v25 = v27;
    v26 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &unk_286678;
    *((_QWORD *)&v19 + 1) = 2LL;
    v22 = 0LL;
    v20 = &v25;
    v21 = 1LL;
    v15 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v23, &v19);
    core::result::Result<T,E>::unwrap(v15, &off_286C48);
    core::ptr::drop_in_place<alloc::string::String>(v27);
    goto LABEL_12;
  }
LABEL_13:
  result = v24;
  *(_QWORD *)(a1 + 16) = v24;
  *(_OWORD *)a1 = v23;
  return result;
}