__int64 __fastcall ruff_python_formatter::expression::format_with_parentheses_comments(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  int v6; // ebx
  int v7; // edx
  int v8; // r14d
  __int64 v9; // r12
  __int64 (__fastcall *v10)(__int64); // rbp
  __int64 v11; // r13
  __int64 *v12; // rax
  int v13; // r8d
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rbp
  _QWORD *v26; // r13
  __int64 result; // rax
  __int64 v28; // [rsp+18h] [rbp-1C0h]
  unsigned __int64 v29; // [rsp+20h] [rbp-1B8h]
  __int64 v30; // [rsp+28h] [rbp-1B0h]
  __int128 v31; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 **v32; // [rsp+48h] [rbp-190h]
  __int64 v33; // [rsp+50h] [rbp-188h]
  __int64 v34; // [rsp+58h] [rbp-180h]
  __int64 v35; // [rsp+60h] [rbp-178h]
  __int64 v36; // [rsp+68h] [rbp-170h]
  _QWORD *v37; // [rsp+70h] [rbp-168h]
  __int64 v38; // [rsp+78h] [rbp-160h] BYREF
  __int64 *v39; // [rsp+80h] [rbp-158h] BYREF
  char v40[4]; // [rsp+8Ch] [rbp-14Ch] BYREF
  const char *v41; // [rsp+90h] [rbp-148h]
  _QWORD v42[2]; // [rsp+98h] [rbp-140h] BYREF
  const char *v43; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-128h]
  __int64 v45; // [rsp+B8h] [rbp-120h]
  __int128 v46; // [rsp+C0h] [rbp-118h]
  void *v47; // [rsp+D0h] [rbp-108h]
  const char *v48; // [rsp+D8h] [rbp-100h]
  __int64 v49; // [rsp+E0h] [rbp-F8h]
  char v50; // [rsp+E8h] [rbp-F0h]
  _QWORD v51[4]; // [rsp+148h] [rbp-90h] BYREF
  _QWORD v52[4]; // [rsp+168h] [rbp-70h] BYREF
  _QWORD v53[10]; // [rsp+188h] [rbp-50h] BYREF

  v38 = a2;
  v6 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a2);
  v8 = v7;
  v9 = *a4;
  v37 = a4;
  v10 = *(__int64 (__fastcall **)(__int64))(a4[1] + 48LL);
  v11 = *(_QWORD *)(*(_QWORD *)(v10(v9) + 16) + 96LL);
  v12 = (__int64 *)v10(v9);
  ruff_python_ast::parenthesize::parentheses_iterator((unsigned int)&v43, v6, v8, 94, v13, v11, *v12, v12[1]);
  LODWORD(v31) = 0;
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::SpecFold>::spec_fold(v40, &v43, &v31);
  if ( (v40[0] & 1) != 0 )
  {
    v43 = v41;
    v14 = *a3;
    v15 = a3[1];
    v16 = core::slice::<impl [T]>::partition_point(*a3, v15, &v43);
    v17 = a3[5];
    v18 = core::slice::<impl [T]>::partition_point(a3[4], v17, &v43);
    if ( v16 > v15 )
    {
      v43 = (const char *)&off_57ADF0;
      v44 = 1LL;
      v45 = 8LL;
      v46 = 0LL;
      core::panicking::panic_fmt(&v43, &off_57DEA0);
    }
    v19 = v18;
  }
  else
  {
    v17 = a3[5];
    v14 = *a3;
    v15 = a3[1];
    v16 = 0LL;
    v19 = v17;
  }
  core::slice::<impl [T]>::split_at_unchecked(v52, v14, v15, v16);
  if ( v19 > v17 )
  {
    v43 = (const char *)&off_57ADF0;
    v44 = 1LL;
    v45 = 8LL;
    v46 = 0LL;
    core::panicking::panic_fmt(&v43, &off_57DEB8);
  }
  v29 = v15;
  v30 = v14;
  v20 = v52[0];
  v36 = v52[1];
  v21 = v52[2];
  v22 = v52[3];
  core::slice::<impl [T]>::split_at_unchecked(v53, a3[4], v17, v19);
  if ( v22 && !*(_BYTE *)(v21 + 9) )
  {
    v30 = v21 + 12;
    v28 = 1LL;
    v29 = v22 - 1;
  }
  else
  {
    v21 = 4LL;
    v28 = 0LL;
  }
  v23 = v53[0];
  v24 = v53[1];
  v25 = v53[2];
  v35 = v53[3];
  v39 = &v38;
  v44 = v20;
  v45 = v36;
  v43 = (_BYTE *)(&dword_0 + 1);
  v26 = v37;
  <ruff_python_formatter::comments::format::FormatLeadingComments as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
    &v31,
    &v43,
    v37);
  if ( (_DWORD)v31 == 4 )
  {
    *(_QWORD *)&v31 = v30;
    *((_QWORD *)&v31 + 1) = v29;
    v32 = &v39;
    v33 = v23;
    v34 = v24;
    v43 = asc_8AC15;
    v44 = 1LL;
    v45 = v21;
    *(_QWORD *)&v46 = v28;
    v50 = 0;
    *((_QWORD *)&v46 + 1) = &v31;
    v47 = &unk_57DED0;
    v48 = asc_8AC16;
    v49 = 1LL;
    v42[0] = v25;
    v42[1] = v35;
    v51[0] = &v43;
    v51[1] = &unk_57D978;
    v51[2] = v42;
    v51[3] = &unk_57D5A8;
    return <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(
             a1,
             v26,
             v51,
             2LL);
  }
  else
  {
    result = (__int64)v32;
    *(_QWORD *)(a1 + 16) = v32;
    *(_OWORD *)a1 = v31;
  }
  return result;
}