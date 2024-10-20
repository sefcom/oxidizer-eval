__int64 __fastcall uu_tr::operation::Sequence::parse_char_star(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rdi
  char *v7; // rsi
  char *v8; // r8
  __int64 v9; // rax
  char v10; // bp
  __int64 v11; // rax
  _BYTE v13[7]; // [rsp+0h] [rbp-A8h]
  __int64 v14; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  char v17; // [rsp+20h] [rbp-88h]
  _BYTE v18[7]; // [rsp+21h] [rbp-87h]
  __int64 v19; // [rsp+28h] [rbp-80h] BYREF
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  char v22; // [rsp+40h] [rbp-68h] BYREF
  char v23; // [rsp+48h] [rbp-60h] BYREF
  char v24; // [rsp+49h] [rbp-5Fh] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp-38h] BYREF
  __int64 v28; // [rsp+78h] [rbp-30h]
  __int64 v29; // [rsp+80h] [rbp-28h]
  char v30; // [rsp+88h] [rbp-20h] BYREF
  char v31; // [rsp+90h] [rbp-18h] BYREF
  char v32; // [rsp+91h] [rbp-17h] BYREF

  v25[0] = anon_75bed6b1e406cad44fd0f567e878a3a0_56_llvm_3640059315831376190;
  v25[1] = 1LL;
  v26[0] = anon_75bed6b1e406cad44fd0f567e878a3a0_57_llvm_3640059315831376190;
  v26[1] = 2LL;
  <F as nom::internal::Parser<I,O,E>>::parse(&v27, v25, a2, a3);
  v4 = v28;
  v5 = v29;
  if ( v27 )
  {
    v6 = &v31;
    v7 = &v32;
    v8 = &v30;
  }
  else
  {
    <(A,B,C) as nom::branch::Alt<Input,Output,Error>>::choice(&v14, v25, v28, v29);
    v4 = v14;
    v9 = v15;
    v5 = v16;
    v10 = v17;
    if ( v14 != 3 )
    {
      *(_DWORD *)&v13[3] = *(_DWORD *)&v18[3];
      *(_DWORD *)v13 = *(_DWORD *)v18;
      goto LABEL_9;
    }
    <F as nom::internal::Parser<I,O,E>>::parse(&v19, v26, v15, v16);
    v5 = v21;
    if ( !v19 )
    {
      v9 = v20;
      goto LABEL_4;
    }
    v7 = &v24;
    v6 = &v23;
    v4 = v20;
    v8 = &v22;
  }
  v9 = v5;
  v5 = *(_QWORD *)v8;
  v10 = *v6;
  *(_DWORD *)&v13[3] = *(_DWORD *)(v7 + 3);
  *(_DWORD *)v13 = *(_DWORD *)v7;
  if ( v4 != 3 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v5;
    *(_BYTE *)(a1 + 32) = v10;
    *(_DWORD *)(a1 + 33) = *(_DWORD *)v13;
    *(_DWORD *)(a1 + 36) = *(_DWORD *)&v13[3];
    v11 = 1LL;
    goto LABEL_10;
  }
LABEL_4:
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = 0x800000000000000ALL;
  *(_BYTE *)(a1 + 32) = 2;
  *(_BYTE *)(a1 + 33) = v10;
  v11 = 0LL;
LABEL_10:
  *(_QWORD *)a1 = v11;
  return a1;
}
