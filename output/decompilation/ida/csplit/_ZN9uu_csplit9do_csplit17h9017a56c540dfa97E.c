__int64 __fastcall uu_csplit::do_csplit(__int64 a1, __int64 a2, __int64 a3, __m256i *a4)
{
  _QWORD *v5; // r14
  __int64 result; // rax
  _BYTE *v7; // rsi
  int v8; // ebp
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r12
  __int128 v23; // xmm0
  unsigned __int64 v24; // r13
  __int128 v25; // xmm0
  _BYTE v27[8]; // [rsp+18h] [rbp-170h] BYREF
  __m256i *v28; // [rsp+20h] [rbp-168h]
  __int64 v29; // [rsp+28h] [rbp-160h]
  __int128 v30; // [rsp+30h] [rbp-158h] BYREF
  __int128 v31; // [rsp+40h] [rbp-148h]
  __int64 v32; // [rsp+50h] [rbp-138h]
  __int64 v33; // [rsp+58h] [rbp-130h]
  __int64 v34; // [rsp+60h] [rbp-128h]
  __int64 v35; // [rsp+70h] [rbp-118h]
  __int128 v36; // [rsp+78h] [rbp-110h] BYREF
  __int128 v37; // [rsp+88h] [rbp-100h]
  __int64 v38; // [rsp+98h] [rbp-F0h]
  _BYTE v39[48]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-B8h]
  _OWORD v41[2]; // [rsp+E0h] [rbp-A8h] BYREF
  _BYTE v42[32]; // [rsp+100h] [rbp-88h] BYREF
  _OWORD v43[3]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v44; // [rsp+150h] [rbp-38h]

  v5 = (_QWORD *)a1;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v42, a3);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v43, v42);
  if ( LODWORD(v43[0]) == 3 )
  {
LABEL_2:
    result = core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(v42);
    *v5 = 12LL;
    return result;
  }
  v7 = v39;
  while ( 1 )
  {
    v40 = v44;
    *(_OWORD *)&v39[32] = v43[2];
    *(_OWORD *)&v39[16] = v43[1];
    *(_OWORD *)v39 = v43[0];
    <T as alloc::string::ToString>::to_string(v27, v39);
    v8 = *(_DWORD *)v39;
    if ( *(_DWORD *)v39 != 2 && *(_DWORD *)v39 != 1 )
      break;
    v41[1] = *(_OWORD *)&v39[24];
    v41[0] = *(_OWORD *)&v39[8];
    v35 = *(unsigned int *)&v39[4];
    v9 = *(_QWORD *)&v39[40];
    v10 = v40;
    if ( *(_QWORD *)&v39[40] )
    {
      v11 = 1LL;
      if ( !v40 )
        goto LABEL_25;
      if ( *(_DWORD *)v39 != 2 )
      {
LABEL_14:
        v14 = uu_csplit::SplitWriter::new_writer(a2);
        if ( v14 )
        {
LABEL_34:
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v14;
          goto LABEL_46;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v11 = 0LL;
      if ( *(_DWORD *)v39 != 2 )
        goto LABEL_14;
    }
    *(_BYTE *)(a2 + 56) = 1;
LABEL_15:
    v7 = (_BYTE *)a2;
    uu_csplit::SplitWriter::do_to_match(&v36, a2, v28, v29, *(__int64 *)&v41[0], *((__m256i **)&v41[0] + 1), v35, a4);
    v32 = v38;
    v31 = v37;
    v30 = v36;
    v33 = v11;
    v34 = v10;
    v15 = v36;
    if ( (_QWORD)v36 != 12LL )
    {
      v16 = 0LL;
LABEL_36:
      if ( v9 )
      {
        v22 = a1;
        if ( v15 == 3 && v10 != 1 && v16 )
        {
          v7 = v27;
          <alloc::string::String as core::clone::Clone>::clone(&v36, v27);
          *(_QWORD *)(a1 + 32) = v37;
          *(_OWORD *)(a1 + 16) = v36;
          *(_QWORD *)a1 = 4LL;
          *(_QWORD *)(a1 + 8) = v16;
          if ( (_DWORD)v30 == 12 )
            goto LABEL_46;
LABEL_44:
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v30);
LABEL_46:
          core::ptr::drop_in_place<regex::regex::string::Regex>(v41);
          goto LABEL_56;
        }
      }
      else
      {
        v22 = a1;
        if ( v15 == 3 )
        {
          *(_QWORD *)a1 = 12LL;
          goto LABEL_44;
        }
      }
      *(_QWORD *)(v22 + 32) = v32;
      v23 = v30;
      *(_OWORD *)(v22 + 16) = v31;
      *(_OWORD *)v22 = v23;
      goto LABEL_46;
    }
    v16 = 1LL;
    if ( !v9 )
    {
      while ( 1 )
      {
        v17 = 0LL;
        if ( v8 == 2 )
          break;
LABEL_21:
        v14 = uu_csplit::SplitWriter::new_writer(a2);
        if ( v14 )
          goto LABEL_34;
LABEL_22:
        v7 = (_BYTE *)a2;
        uu_csplit::SplitWriter::do_to_match(
          &v36,
          a2,
          v28,
          v29,
          *(__int64 *)&v41[0],
          *((__m256i **)&v41[0] + 1),
          v35,
          a4);
        v32 = v38;
        v31 = v37;
        v30 = v36;
        v33 = v17;
        v34 = v10;
        v15 = v36;
        if ( (_QWORD)v36 != 12LL )
          goto LABEL_36;
        ++v16;
        if ( v9 )
          goto LABEL_17;
      }
LABEL_19:
      *(_BYTE *)(a2 + 56) = 1;
      goto LABEL_22;
    }
LABEL_17:
    v17 = 1LL;
    if ( v10 != v16 )
    {
      if ( v8 != 2 )
        goto LABEL_21;
      goto LABEL_19;
    }
LABEL_25:
    core::ptr::drop_in_place<regex::regex::string::Regex>(v41);
    v5 = (_QWORD *)a1;
LABEL_26:
    core::ptr::drop_in_place<alloc::string::String>(v27, v7);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v43, v42);
    v7 = v39;
    if ( LODWORD(v43[0]) == 3 )
      goto LABEL_2;
  }
  v12 = *(_QWORD *)&v39[8];
  v13 = *(_QWORD *)&v39[24];
  if ( *(_QWORD *)&v39[16] && !*(_QWORD *)&v39[24] )
    goto LABEL_26;
  if ( *(_QWORD *)&v39[16] )
  {
    v18 = *(_QWORD *)&v39[8];
    v19 = 0LL;
    do
    {
      v20 = uu_csplit::SplitWriter::new_writer(a2);
      if ( v20 )
        goto LABEL_51;
      v7 = (_BYTE *)a2;
      uu_csplit::SplitWriter::do_to_line((__int64)&v30, a2, (__int64)v28, v29, v18, (__int64)a4);
      v21 = v30;
      if ( (_QWORD)v30 != 12LL )
        goto LABEL_52;
      ++v19;
      v18 += v12;
    }
    while ( v13 != v19 );
    v5 = (_QWORD *)a1;
    goto LABEL_26;
  }
  v19 = 0LL;
  v24 = *(_QWORD *)&v39[8];
  while ( 1 )
  {
    v20 = uu_csplit::SplitWriter::new_writer(a2);
    if ( v20 )
    {
LABEL_51:
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v20;
      goto LABEL_56;
    }
    v7 = (_BYTE *)a2;
    uu_csplit::SplitWriter::do_to_line((__int64)&v30, a2, (__int64)v28, v29, v24, (__int64)a4);
    v21 = v30;
    if ( (_QWORD)v30 != 12LL )
      break;
    v24 += v12;
    ++v19;
  }
LABEL_52:
  if ( v19 && v21 == 1 )
  {
    v7 = v27;
    <alloc::string::String as core::clone::Clone>::clone(&v36, v27);
    *(_QWORD *)(a1 + 32) = v37;
    *(_OWORD *)(a1 + 16) = v36;
    *(_QWORD *)a1 = 2LL;
    *(_QWORD *)(a1 + 8) = v19;
    core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v30);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v32;
    v25 = v30;
    *(_OWORD *)(a1 + 16) = v31;
    *(_OWORD *)a1 = v25;
  }
LABEL_56:
  core::ptr::drop_in_place<alloc::string::String>(v27, v7);
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(v42);
}
