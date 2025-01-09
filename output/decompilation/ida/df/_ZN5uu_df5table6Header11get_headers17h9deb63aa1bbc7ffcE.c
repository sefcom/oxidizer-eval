__int64 __fastcall uu_df::table::Header::get_headers(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE *v3; // rax
  int v4; // ebp
  __int64 v5; // r15
  _BYTE *v6; // rax
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-E8h]
  __int64 **v9; // [rsp+10h] [rbp-D8h]
  __int128 v10; // [rsp+20h] [rbp-C8h] BYREF
  __int64 **v11; // [rsp+30h] [rbp-B8h]
  __int64 v12; // [rsp+38h] [rbp-B0h]
  __int64 v13; // [rsp+40h] [rbp-A8h]
  __int64 *v14; // [rsp+50h] [rbp-98h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+58h] [rbp-90h]
  __int128 v16; // [rsp+60h] [rbp-88h] BYREF
  __int64 v17; // [rsp+70h] [rbp-78h]
  _QWORD v18[2]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v19; // [rsp+88h] [rbp-60h] BYREF
  __int128 v20; // [rsp+90h] [rbp-58h] BYREF
  __int64 **v21; // [rsp+A0h] [rbp-48h]
  __int128 v22; // [rsp+A8h] [rbp-40h] BYREF
  __int64 **v23; // [rsp+B8h] [rbp-30h]

  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 8LL;
  v17 = 0LL;
  v2 = *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16);
  v18[0] = *(_QWORD *)(a2 + 8);
  v18[1] = v2;
  v3 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18);
  if ( v3 )
  {
    v4 = *(unsigned __int8 *)(a2 + 85);
    v5 = *(_QWORD *)(a2 + 72);
    switch ( *v3 )
    {
      case 0:
LABEL_4:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aFilesystem, 10LL);
        goto LABEL_18;
      case 1:
        while ( 2 )
        {
          if ( v4 == 1 )
          {
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, &unk_BEA8, 4LL);
LABEL_18:
            v9 = v11;
            v8 = v10;
          }
          else if ( v4 == 2 )
          {
            v19 = v5;
            v14 = &v19;
            v15 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            *(_QWORD *)&v10 = &unk_141B50;
            *((_QWORD *)&v10 + 1) = 2LL;
            v13 = 0LL;
            v11 = &v14;
            v12 = 1LL;
            core::option::Option<T>::map_or_else(&v20, &v10);
            v8 = v20;
            v9 = v21;
          }
          else
          {
            v14 = (__int64 *)(a2 + 72);
            v15 = <uu_df::blocks::BlockSize as core::fmt::Display>::fmt;
            *(_QWORD *)&v10 = &unk_141B50;
            *((_QWORD *)&v10 + 1) = 2LL;
            v13 = 0LL;
            v11 = &v14;
            v12 = 1LL;
            core::option::Option<T>::map_or_else(&v22, &v10);
            v8 = v22;
            v9 = v23;
          }
          v11 = v9;
          v10 = v8;
          alloc::vec::Vec<T,A>::push(&v16, &v10);
          v6 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18);
          if ( v6 )
          {
            switch ( *v6 )
            {
              case 0:
                goto LABEL_4;
              case 1:
                continue;
              case 2:
                goto LABEL_22;
              case 3:
                goto LABEL_7;
              case 4:
                goto LABEL_10;
              case 5:
                goto LABEL_5;
              case 6:
                goto LABEL_23;
              case 7:
                goto LABEL_24;
              case 8:
                goto LABEL_13;
              case 9:
                goto LABEL_26;
              case 0xA:
                goto LABEL_6;
              case 0xB:
                goto LABEL_25;
            }
          }
          break;
        }
        break;
      case 2:
LABEL_22:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aUsed, 4LL);
        goto LABEL_18;
      case 3:
LABEL_7:
        if ( (v4 | 2) == 3 )
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aAvail_0, 5LL);
        else
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aAvailable, 9LL);
        goto LABEL_18;
      case 4:
LABEL_10:
        if ( v4 == 2 )
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aCapacity, 8LL);
        else
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aUse, 4LL);
        goto LABEL_18;
      case 5:
LABEL_5:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aMountedOn, 10LL);
        goto LABEL_18;
      case 6:
LABEL_23:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aInodes, 6LL);
        goto LABEL_18;
      case 7:
LABEL_24:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aIused_0, 5LL);
        goto LABEL_18;
      case 8:
LABEL_13:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aIfree, 5LL);
        goto LABEL_18;
      case 9:
LABEL_26:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aIuse, 5LL);
        goto LABEL_18;
      case 0xA:
LABEL_6:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aFile, 4LL);
        goto LABEL_18;
      case 0xB:
LABEL_25:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aType_1, 4LL);
        goto LABEL_18;
    }
  }
  result = v17;
  *(_QWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return result;
}
