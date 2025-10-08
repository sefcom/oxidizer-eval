__int64 __fastcall bat::line_range::LineRange::parse_range(__int64 a1, char *a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int8 *v15; // r12
  __int64 v16; // r15
  int v17; // eax
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  unsigned __int64 v24; // r12
  char v25; // al
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  bool v31; // cf
  unsigned __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  unsigned __int64 v39; // rcx
  char **v40; // r8
  __int128 v41; // [rsp+0h] [rbp-98h] BYREF
  __int128 v42; // [rsp+10h] [rbp-88h] BYREF
  __int128 v43; // [rsp+20h] [rbp-78h]
  __int128 v44; // [rsp+30h] [rbp-68h]
  __int128 v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v47; // [rsp+58h] [rbp-40h]
  __int64 v48; // [rsp+60h] [rbp-38h]

  if ( !a3 )
    return <bat::error::Error as core::convert::From<&str>>::from(a1, aEmptyLineRange, 16LL);
  v4 = *a2;
  if ( *a2 == 58 )
  {
    if ( a3 == 1 || a2[1] != 45 )
    {
      v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              1LL,
              a2,
              a3);
      if ( !v11 )
        core::str::slice_error_fail(a2, a3, 1LL, a3, &off_6CE780);
      core::num::<impl usize>::from_ascii_radix(&v41, v11);
      if ( !(_BYTE)v41 )
      {
        result = *((_QWORD *)&v41 + 1);
        v7 = 0LL;
        goto LABEL_19;
      }
    }
    else
    {
      v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             2LL,
             a2,
             a3);
      if ( !v5 )
        core::str::slice_error_fail(a2, a3, 2LL, a3, &off_6CE798);
      core::num::<impl usize>::from_ascii_radix(&v41, v5);
      if ( !(_BYTE)v41 )
      {
        result = *((_QWORD *)&v41 + 1);
        v7 = 1LL;
LABEL_19:
        *(_OWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 24) = v7;
        *(_QWORD *)(a1 + 32) = result;
        *(_BYTE *)a1 = 13;
        return result;
      }
    }
LABEL_17:
    result = BYTE1(v41);
    *(_BYTE *)a1 = 4;
    *(_BYTE *)(a1 + 1) = result;
    return result;
  }
  *(_QWORD *)&v41 = a2;
  *((_QWORD *)&v41 + 1) = &a2[a3];
  v8 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v41);
  if ( !v8 )
    return <bat::error::Error as core::convert::From<&str>>::from(a1, aEmptyLineRange, 16LL);
  if ( *v8 != 58 )
  {
    <char as core::str::pattern::Pattern>::into_searcher(&v42, 58LL, a2, a3);
    *(_QWORD *)&v41 = 0LL;
    *((_QWORD *)&v41 + 1) = a3;
    LOWORD(v45) = 1;
    core::iter::traits::iterator::Iterator::collect(&v46, &v41);
    switch ( v48 )
    {
      case 1LL:
        v12 = v47;
        core::num::<impl usize>::from_ascii_radix(&v41, *v47);
        if ( !(_BYTE)v41 )
        {
          v20 = *((_QWORD *)&v41 + 1);
          *(_QWORD *)(a1 + 8) = 0LL;
          *(_QWORD *)(a1 + 16) = v20;
          *(_QWORD *)(a1 + 24) = 0LL;
          *(_QWORD *)(a1 + 32) = v20;
          goto LABEL_73;
        }
        break;
      case 2LL:
        v12 = v47;
        core::num::<impl usize>::from_ascii_radix(&v41, *v47);
        if ( (_BYTE)v41 != 1 )
        {
          v14 = *((_QWORD *)&v41 + 1);
          v15 = (unsigned __int8 *)v12[2];
          v16 = v12[3];
          if ( v16 )
          {
            v17 = *v15;
            if ( v17 == 43 )
            {
              v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                      1LL,
                      v12[2],
                      v12[3]);
              if ( v28 )
              {
                core::num::<impl usize>::from_ascii_radix(&v41, v28);
                if ( (_BYTE)v41 )
                {
                  <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidCharact_1, 25LL);
                  goto LABEL_66;
                }
                v31 = __CFADD__(v14, *((_QWORD *)&v41 + 1));
                v39 = v14 + *((_QWORD *)&v41 + 1);
                v27 = v14;
                v14 = -1LL;
                if ( !v31 )
                  v14 = v39;
                goto LABEL_72;
              }
              v40 = &off_6CE810;
              goto LABEL_82;
            }
            if ( v17 == 45 )
            {
              v18 = (_BYTE *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                               1LL,
                               v12[2],
                               v12[3]);
              if ( v18 )
              {
                if ( v19 && *v18 == 43 )
                  goto LABEL_65;
                v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                        1LL,
                        v15,
                        v16);
                if ( v35 )
                {
                  core::num::<impl usize>::from_ascii_radix(&v41, v35);
                  if ( (_BYTE)v41 == 1 )
                  {
LABEL_65:
                    <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidCharact_0, 25LL);
                    goto LABEL_66;
                  }
                  v27 = 0LL;
                  if ( v14 >= *((_QWORD *)&v41 + 1) )
                    v27 = v14 - *((_QWORD *)&v41 + 1);
LABEL_72:
                  *(_QWORD *)(a1 + 8) = 0LL;
                  *(_QWORD *)(a1 + 16) = v27;
                  *(_QWORD *)(a1 + 24) = 0LL;
                  *(_QWORD *)(a1 + 32) = v14;
                  goto LABEL_73;
                }
                v40 = &off_6CE7F8;
              }
              else
              {
                v40 = &off_6CE7E0;
              }
LABEL_82:
              core::str::slice_error_fail(v15, v16, 1LL, v16, v40);
            }
          }
          core::num::<impl usize>::from_ascii_radix(&v41, v12[2]);
          if ( (_BYTE)v41 != 1 )
          {
            v27 = v14;
            v14 = *((_QWORD *)&v41 + 1);
            goto LABEL_72;
          }
        }
        break;
      case 3LL:
        v12 = v47;
        if ( v47[3] )
        {
          core::num::<impl usize>::from_ascii_radix(&v41, *v47);
          if ( (_BYTE)v41 == 1 )
          {
            <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidStartLi, 41LL);
LABEL_66:
            *(_OWORD *)(a1 + 64) = v45;
            v36 = v41;
            v37 = v42;
            v38 = v43;
            *(_OWORD *)(a1 + 48) = v44;
            *(_OWORD *)(a1 + 32) = v38;
            *(_OWORD *)(a1 + 16) = v37;
            *(_OWORD *)a1 = v36;
            return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v46, v12);
          }
          v24 = *((_QWORD *)&v41 + 1);
          core::num::<impl usize>::from_ascii_radix(&v41, v12[2]);
          if ( (_BYTE)v41 == 1 )
          {
            <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidEndLine, 39LL);
            goto LABEL_66;
          }
          v26 = *((_QWORD *)&v41 + 1);
          core::num::<impl usize>::from_ascii_radix(&v41, v12[4]);
          if ( (_BYTE)v41 == 1 )
          {
            <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidContext_0, 38LL);
            goto LABEL_66;
          }
          v29 = *((_QWORD *)&v41 + 1);
          v30 = 0LL;
          v31 = v24 < *((_QWORD *)&v41 + 1);
          v32 = v24 - *((_QWORD *)&v41 + 1);
          if ( !v31 )
            v30 = v32;
        }
        else
        {
          core::num::<impl usize>::from_ascii_radix(&v41, *v47);
          if ( (_BYTE)v41 == 1 )
          {
            <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidLineNum, 34LL);
            goto LABEL_66;
          }
          v26 = *((_QWORD *)&v41 + 1);
          core::num::<impl usize>::from_ascii_radix(&v41, v12[4]);
          if ( (_BYTE)v41 == 1 )
          {
            <bat::error::Error as core::convert::From<&str>>::from(&v41, aInvalidContext, 37LL);
            goto LABEL_66;
          }
          v29 = *((_QWORD *)&v41 + 1);
          v30 = 0LL;
          if ( v26 >= *((_QWORD *)&v41 + 1) )
            v30 = v26 - *((_QWORD *)&v41 + 1);
        }
        v31 = __CFADD__(v29, v26);
        v33 = v29 + v26;
        v34 = -1LL;
        if ( !v31 )
          v34 = v33;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = v30;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 32) = v34;
LABEL_73:
        *(_BYTE *)a1 = 13;
        return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v46, v12);
      default:
        <bat::error::Error as core::convert::From<&str>>::from(&v41, aLineRangeConta, 93LL);
        *(_OWORD *)(a1 + 64) = v45;
        v21 = v41;
        v22 = v42;
        v23 = v43;
        *(_OWORD *)(a1 + 48) = v44;
        *(_OWORD *)(a1 + 32) = v23;
        *(_OWORD *)(a1 + 16) = v22;
        *(_OWORD *)a1 = v21;
        v12 = v47;
        return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v46, v12);
    }
    v25 = BYTE1(v41);
    *(_BYTE *)a1 = 4;
    *(_BYTE *)(a1 + 1) = v25;
    return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v46, v12);
  }
  if ( v4 == 45 )
  {
    v9 = 1LL;
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            1LL,
            a3 - 1,
            a2,
            a3);
    if ( !v10 )
      core::str::slice_error_fail(a2, a3, 1LL, a3 - 1, &off_6CE7B0);
    core::num::<impl usize>::from_ascii_radix(&v41, v10);
    if ( (_BYTE)v41 )
      goto LABEL_17;
    result = *((_QWORD *)&v41 + 1);
  }
  else
  {
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
            a3 - 1,
            a2,
            a3);
    if ( !v13 )
      core::str::slice_error_fail(a2, a3, 0LL, a3 - 1, &off_6CE7C8);
    core::num::<impl usize>::from_ascii_radix(&v41, v13);
    if ( (_BYTE)v41 )
      goto LABEL_17;
    result = *((_QWORD *)&v41 + 1);
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = -1LL;
  *(_BYTE *)a1 = 13;
  return result;
}