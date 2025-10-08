__int64 __fastcall ruff_python_formatter::comments::placement::handle_pattern_match_as_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 *v8; // r15
  unsigned int v11; // edx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  unsigned int v15; // ecx
  __int64 v16; // rdx
  bool v17; // cf
  __int64 *v18; // rax
  char v19; // cl
  __int64 v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-A0h] BYREF
  int v22; // [rsp+10h] [rbp-98h]
  __int64 v23; // [rsp+14h] [rbp-94h] BYREF
  int v24; // [rsp+1Ch] [rbp-8Ch]
  __int64 v25; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-74h] BYREF
  char v28; // [rsp+3Ch] [rbp-6Ch]
  _BYTE v29[48]; // [rsp+40h] [rbp-68h] BYREF
  char v30[56]; // [rsp+70h] [rbp-38h] BYREF

  result = *((_QWORD *)a2 + 2);
  if ( result == 94 )
    goto LABEL_6;
  v7 = *((_QWORD *)a2 + 3);
  v25 = result;
  v26 = v7;
  v8 = &v25;
  <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v25);
  ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v29, v11, a3, a4);
  v30[0] = 0;
  core::iter::traits::iterator::Iterator::try_fold(&v23, v29, v30);
  if ( (_BYTE)v24 == 90 )
  {
    LOBYTE(v22) = 90;
  }
  else
  {
    v22 = v24;
    v21 = v23;
  }
  result = core::option::Option<T>::filter(&v27, &v21);
  if ( v28 == 90 )
  {
LABEL_6:
    *(_OWORD *)(a1 + 64) = a2[4];
    v12 = *a2;
    v13 = a2[1];
    v14 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
  }
  else
  {
    v15 = *((_DWORD *)a2 + 17);
    v16 = 96LL - (v15 < v27);
    if ( v15 >= v27 )
      v8 = (__int64 *)a2;
    v17 = v15 < v27;
    v18 = &v26;
    v19 = *((_BYTE *)a2 + 72);
    v20 = *((_QWORD *)a2 + 8);
    if ( !v17 )
      v18 = (__int64 *)a2 + 1;
    result = *v18;
    *(_QWORD *)(a1 + 8) = *v8;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v20;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v19;
    *(_QWORD *)a1 = v16;
  }
  return result;
}