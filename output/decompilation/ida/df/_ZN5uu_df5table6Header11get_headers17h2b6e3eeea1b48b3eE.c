__int64 __fastcall uu_df::table::Header::get_headers(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  int v4; // ecx
  __int64 v5; // r12
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-E8h] BYREF
  __int64 **v9; // [rsp+10h] [rbp-D8h]
  __int128 v10; // [rsp+20h] [rbp-C8h] BYREF
  __int64 **v11; // [rsp+30h] [rbp-B8h]
  __int64 v12; // [rsp+38h] [rbp-B0h]
  __int64 v13; // [rsp+40h] [rbp-A8h]
  int v14; // [rsp+50h] [rbp-98h]
  int v15; // [rsp+54h] [rbp-94h]
  __int64 *v16; // [rsp+58h] [rbp-90h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+60h] [rbp-88h]
  __int64 v18; // [rsp+68h] [rbp-80h] BYREF
  __int64 v19; // [rsp+70h] [rbp-78h]
  __int64 v20; // [rsp+78h] [rbp-70h]
  __int64 v21; // [rsp+80h] [rbp-68h]
  __int64 *v22; // [rsp+88h] [rbp-60h]
  _QWORD *v23; // [rsp+90h] [rbp-58h]
  __int64 v24; // [rsp+98h] [rbp-50h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-48h] BYREF
  __int64 **v26; // [rsp+B0h] [rbp-38h]

  v23 = a1;
  v18 = 0LL;
  v19 = 8LL;
  v20 = 0LL;
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *(unsigned __int8 *)(a2 + 85);
    v21 = *(_QWORD *)(a2 + 72);
    v22 = (__int64 *)(a2 + 72);
    v5 = 0LL;
    v14 = v4;
    v15 = v4 | 2;
    while ( 2 )
    {
      switch ( *(_BYTE *)(v3 + v5) )
      {
        case 0:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aFilesystem, 10LL);
          goto LABEL_23;
        case 1:
          if ( v14 == 1 )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aSize_0, 4LL);
LABEL_23:
            v9 = v11;
            v8 = v10;
          }
          else
          {
            if ( v14 == 2 )
            {
              v24 = v21;
              v16 = &v24;
              v17 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            }
            else
            {
              v16 = v22;
              v17 = <uu_df::blocks::BlockSize as core::fmt::Display>::fmt;
            }
            *(_QWORD *)&v10 = &unk_102ED0;
            *((_QWORD *)&v10 + 1) = 2LL;
            v13 = 0LL;
            v11 = &v16;
            v12 = 1LL;
            core::option::Option<T>::map_or_else(&v25, &v10);
            v8 = v25;
            v9 = v26;
          }
          alloc::vec::Vec<T,A>::push(&v18, &v8, &off_102EF0);
          if ( v2 == ++v5 )
            break;
          continue;
        case 2:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aUsed, 4LL);
          goto LABEL_23;
        case 3:
          if ( v15 == 3 )
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aAvail_0, 5LL);
          else
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aAvailable, 9LL);
          goto LABEL_23;
        case 4:
          if ( v14 == 2 )
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aCapacity, 8LL);
          else
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aUse, 4LL);
          goto LABEL_23;
        case 5:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aMountedOn, 10LL);
          goto LABEL_23;
        case 6:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aInodes, 6LL);
          goto LABEL_23;
        case 7:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aIused_0, 5LL);
          goto LABEL_23;
        case 8:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aIfree, 5LL);
          goto LABEL_23;
        case 9:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aIuse, 5LL);
          goto LABEL_23;
        case 0xA:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aFile, 4LL);
          goto LABEL_23;
        case 0xB:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aType_0, 4LL);
          goto LABEL_23;
      }
      break;
    }
  }
  v6 = v23;
  v23[2] = v20;
  *v6 = v18;
  result = v19;
  v6[1] = v19;
  return result;
}