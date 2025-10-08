__int64 __fastcall uu_csplit::do_csplit(__int64 a1, _BYTE *a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r12
  __int64 result; // rax
  _BYTE *v7; // rsi
  int v8; // r13d
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebp
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r15
  __int128 v22; // xmm0
  __int64 v23; // r13
  __int128 v24; // xmm0
  _BYTE *v25; // [rsp+10h] [rbp-178h]
  _BYTE v27[8]; // [rsp+28h] [rbp-160h] BYREF
  __int64 v28; // [rsp+30h] [rbp-158h]
  __int64 v29; // [rsp+38h] [rbp-150h]
  __int128 v30; // [rsp+40h] [rbp-148h] BYREF
  __int128 v31; // [rsp+50h] [rbp-138h]
  __int64 v32; // [rsp+60h] [rbp-128h]
  __int64 v33; // [rsp+68h] [rbp-120h]
  __int64 v34; // [rsp+70h] [rbp-118h]
  _BYTE v35[48]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-D8h]
  __int128 v37; // [rsp+B8h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-C0h]
  __int64 v39; // [rsp+D8h] [rbp-B0h]
  _OWORD v40[2]; // [rsp+E0h] [rbp-A8h] BYREF
  _BYTE v41[32]; // [rsp+100h] [rbp-88h] BYREF
  _OWORD v42[3]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v43; // [rsp+150h] [rbp-38h]

  v5 = a1;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v41, a3);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v42, v41);
  if ( LODWORD(v42[0]) == 3 )
  {
LABEL_2:
    result = core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(v41);
    *(_QWORD *)v5 = 13LL;
    return result;
  }
  v7 = v35;
  v25 = a2;
  while ( 1 )
  {
    v36 = v43;
    *(_OWORD *)&v35[32] = v42[2];
    *(_OWORD *)&v35[16] = v42[1];
    *(_OWORD *)v35 = v42[0];
    <T as alloc::string::SpecToString>::spec_to_string(v27, v35);
    v8 = *(_DWORD *)v35;
    if ( *(_DWORD *)v35 )
    {
      v40[1] = *(_OWORD *)&v35[24];
      v40[0] = *(_OWORD *)&v35[8];
      v15 = *(_DWORD *)&v35[4];
      v16 = *(_QWORD *)&v35[40];
      v17 = v36;
      v18 = 0LL;
      if ( !v35[40] )
      {
LABEL_13:
        v19 = 0LL;
        if ( v8 == 2 )
          goto LABEL_18;
LABEL_14:
        v20 = uu_csplit::SplitWriter::new_writer(v25);
        v7 = v25;
        if ( !v20 )
          goto LABEL_19;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v20;
        goto LABEL_33;
      }
      while ( 1 )
      {
        v19 = v16;
        if ( v17 == v18 )
        {
          core::ptr::drop_in_place<regex::regex::string::Regex>(v40);
          v5 = a1;
          a2 = v25;
          goto LABEL_23;
        }
        if ( v8 != 2 )
          goto LABEL_14;
LABEL_18:
        v7 = v25;
        v25[56] = 1;
LABEL_19:
        uu_csplit::SplitWriter::do_to_match(
          &v37,
          (__int64)v7,
          v28,
          v29,
          *(__int64 *)&v40[0],
          *((_QWORD **)&v40[0] + 1),
          v15,
          a4);
        v32 = v39;
        v31 = v38;
        v30 = v37;
        v33 = v19;
        v34 = v17;
        if ( (_QWORD)v37 != 13LL )
          break;
        ++v18;
        if ( !(_BYTE)v16 )
          goto LABEL_13;
      }
      if ( v19 )
      {
        v21 = a1;
        if ( (_DWORD)v37 == 3 && v17 != 1 && v18 != 0 )
        {
          v7 = v27;
          <alloc::string::String as core::clone::Clone>::clone(&v37, v27);
          *(_QWORD *)(a1 + 32) = v38;
          *(_OWORD *)(a1 + 16) = v37;
          *(_QWORD *)a1 = 4LL;
          *(_QWORD *)(a1 + 8) = v18;
LABEL_31:
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v30);
LABEL_33:
          core::ptr::drop_in_place<regex::regex::string::Regex>(v40);
          goto LABEL_34;
        }
      }
      else
      {
        v21 = a1;
        if ( (_DWORD)v37 == 3 )
        {
          *(_QWORD *)a1 = 13LL;
          goto LABEL_31;
        }
      }
      *(_QWORD *)(v21 + 32) = v32;
      v22 = v30;
      *(_OWORD *)(v21 + 16) = v31;
      *(_OWORD *)v21 = v22;
      goto LABEL_33;
    }
    v9 = *(_QWORD *)&v35[24];
    if ( ((*(_QWORD *)&v35[24] == 0LL) & v35[16]) == 0 )
      break;
LABEL_23:
    core::ptr::drop_in_place<alloc::string::String>(v27, v7);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v42, v41);
    v7 = v35;
    if ( LODWORD(v42[0]) == 3 )
      goto LABEL_2;
  }
  v10 = *(_QWORD *)&v35[8];
  if ( (v35[16] & 1) != 0 )
  {
    v11 = *(_QWORD *)&v35[8];
    v12 = 0LL;
    while ( 1 )
    {
      v13 = uu_csplit::SplitWriter::new_writer(a2);
      if ( v13 )
        break;
      v7 = a2;
      uu_csplit::SplitWriter::do_to_line(&v30, a2, v28, v29, v11, a4);
      v14 = v30;
      if ( (_QWORD)v30 != 13LL )
        goto LABEL_40;
      ++v12;
      v11 += v10;
      if ( v9 == v12 )
        goto LABEL_23;
    }
  }
  else
  {
    v12 = 0LL;
    v23 = *(_QWORD *)&v35[8];
    while ( 1 )
    {
      v13 = uu_csplit::SplitWriter::new_writer(v25);
      if ( v13 )
        break;
      v7 = v25;
      uu_csplit::SplitWriter::do_to_line(&v30, v25, v28, v29, v23, a4);
      v14 = v30;
      if ( (_QWORD)v30 != 13LL )
      {
LABEL_40:
        if ( v14 != 1 || v12 == 0 )
        {
          *(_QWORD *)(v5 + 32) = v32;
          v24 = v30;
          *(_OWORD *)(v5 + 16) = v31;
          *(_OWORD *)v5 = v24;
        }
        else
        {
          v7 = v27;
          <alloc::string::String as core::clone::Clone>::clone(&v37, v27);
          *(_QWORD *)(v5 + 32) = v38;
          *(_OWORD *)(v5 + 16) = v37;
          *(_QWORD *)v5 = 2LL;
          *(_QWORD *)(v5 + 8) = v12;
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v30);
        }
        goto LABEL_34;
      }
      v23 += v10;
      ++v12;
    }
  }
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = v13;
LABEL_34:
  core::ptr::drop_in_place<alloc::string::String>(v27, v7);
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(v41);
}