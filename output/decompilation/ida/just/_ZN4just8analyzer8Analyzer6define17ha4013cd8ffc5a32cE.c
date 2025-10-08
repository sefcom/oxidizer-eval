__int64 __fastcall just::analyzer::Analyzer::define(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  __int64 v10; // rax
  __int64 inner; // rax
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rdx
  __int64 result; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // r13
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+8h] [rbp-160h]
  unsigned __int64 v29; // [rsp+10h] [rbp-158h]
  unsigned __int64 v30; // [rsp+18h] [rbp-150h]
  unsigned __int64 v31; // [rsp+28h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-138h]
  __int128 v33; // [rsp+38h] [rbp-130h]
  __int128 v34; // [rsp+48h] [rbp-120h]
  __int128 v35; // [rsp+58h] [rbp-110h]
  __int128 v36; // [rsp+68h] [rbp-100h]
  __int64 v37; // [rsp+78h] [rbp-F0h]
  _OWORD v38[4]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-98h]
  char v40[136]; // [rsp+E0h] [rbp-88h] BYREF

  v10 = just::token::Token::lexeme(a3);
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, v10);
  if ( !inner
    || (v12 = inner,
        v30 = *(_QWORD *)(inner + 16),
        v29 = *(_QWORD *)(inner + 24),
        v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v29, a4, a5),
        a6)
    && v13 )
  {
    v14 = just::token::Token::lexeme(a3);
    v31 = a4;
    v32 = a5;
    v15 = a3[1];
    v16 = a3[2];
    v17 = a3[3];
    v33 = *a3;
    v34 = v15;
    v35 = v16;
    v36 = v17;
    v37 = *((_QWORD *)a3 + 8);
    hashbrown::map::HashMap<K,V,S,A>::insert(v40, a2, v14, v18, &v31);
    result = a1;
    *(_BYTE *)(a1 + 72) = 37;
  }
  else
  {
    v20 = *((_QWORD *)a3 + 6);
    v21 = *(_QWORD *)(v12 + 80);
    if ( v20 >= v21 )
    {
      v22 = (__int64)a3;
      v20 = v21;
      v28 = v29;
      v23 = v30;
    }
    else
    {
      v22 = v12 + 32;
      v28 = a5;
      v23 = a4;
      a4 = v30;
      a5 = v29;
    }
    v39 = *(_QWORD *)(v22 + 64);
    v24 = *(_OWORD *)v22;
    v25 = *(_OWORD *)(v22 + 16);
    v26 = *(_OWORD *)(v22 + 32);
    v38[3] = *(_OWORD *)(v22 + 48);
    v38[2] = v26;
    v38[1] = v25;
    v38[0] = v24;
    *((_QWORD *)&v35 + 1) = v20;
    v32 = v23;
    *(_QWORD *)&v33 = v28;
    *((_QWORD *)&v33 + 1) = just::token::Token::lexeme(a3);
    *(_QWORD *)&v34 = v27;
    *((_QWORD *)&v34 + 1) = a4;
    *(_QWORD *)&v35 = a5;
    v31 = 0x8000000000000030LL;
    return just::token::Token::error(a1, v38, &v31);
  }
  return result;
}