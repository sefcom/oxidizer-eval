_QWORD *__fastcall compat_core::esxi::vm::EsxiVM::kill_ensure(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  bool v13; // zf
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rsi
  _QWORD *result; // rax
  int v24; // [rsp+Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+10h] [rbp-B8h]
  _QWORD *v26; // [rsp+18h] [rbp-B0h]
  __int64 *v27; // [rsp+20h] [rbp-A8h]
  __int64 v28; // [rsp+28h] [rbp-A0h]
  __int128 v29; // [rsp+30h] [rbp-98h] BYREF
  __int64 v30; // [rsp+40h] [rbp-88h]
  __int64 v31; // [rsp+48h] [rbp-80h]
  _QWORD *v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+58h] [rbp-70h]
  _QWORD *v34; // [rsp+60h] [rbp-68h]
  __int64 v35; // [rsp+68h] [rbp-60h]
  _QWORD *v36; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v37[10]; // [rsp+78h] [rbp-50h] BYREF

  v2 = a2;
  v26 = a1;
  v24 = 1;
  v34 = a2 + 1;
  v27 = a2;
  while ( 2 )
  {
    v3 = *v2;
    compat_core::esxi::vm::EsxiVM::get_running(&v29);
    v25 = *((_QWORD *)&v29 + 1);
    v5 = v30;
    if ( (_QWORD)v29 == 1LL )
    {
      result = v26;
      *v26 = v25;
      result[1] = v5;
    }
    else
    {
      v6 = 32 * v31;
      v35 = v31;
      v28 = v30;
      if ( v31 )
      {
        v7 = v25 + 32;
        v8 = 0LL;
        v9 = 32 * v31;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v7 - 24);
          if ( !v10 )
          {
            if ( v25 + v6 == v7 )
              goto LABEL_33;
            goto LABEL_27;
          }
          v11 = *(_QWORD *)(v7 - 16);
          v12 = *(_QWORD *)(v7 - 32);
          if ( v11 )
            _rust_dealloc(v10, v11, 1LL);
          if ( v12 == v3 )
            break;
          v7 += 32LL;
          v8 += 32LL;
          v9 -= 32LL;
          if ( !v9 )
            goto LABEL_33;
        }
        v13 = v9 == 32;
        v14 = v28;
        v15 = v25;
        if ( !v13 )
        {
          v16 = v6 - 32;
          do
          {
            v17 = *(_QWORD *)(v15 + v8 + 48);
            if ( v17 )
              _rust_dealloc(*(_QWORD *)(v15 + v8 + 40), v17, 1LL);
            v8 += 32LL;
          }
          while ( v16 != v8 );
        }
        if ( v14 )
        {
          v18 = 32 * v14;
          if ( v18 )
            _rust_dealloc(v15, v18, 8LL);
        }
        v2 = v27;
        if ( log::MAX_LOG_LEVEL_FILTER >= 3uLL )
        {
          v36 = v34;
          v37[0] = &v36;
          v37[1] = <&T as core::fmt::Display>::fmt;
          v37[2] = &v24;
          v37[3] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
          *(_QWORD *)&v29 = &off_3E63C0;
          *((_QWORD *)&v29 + 1) = 2LL;
          v30 = 0LL;
          v32 = v37;
          v33 = 2LL;
          log::__private_api_log(&v29, 3LL, &off_3E63E0, 0LL);
        }
        compat_core::esxi::vm::EsxiVM::kill(&v29, v2, v4, v5);
        if ( (_BYTE)v29 != 3 )
          goto LABEL_38;
        v19 = v24;
        if ( v24 > 1 )
        {
          std::thread::sleep(1LL, 0LL);
          v19 = v24;
        }
        v24 = v19 + 1;
        if ( v19 + 1 < 10 )
          continue;
      }
      else
      {
        v7 = v25;
        if ( v25 + v6 != v25 )
        {
LABEL_27:
          v20 = v25 + 32 * v35;
          do
          {
            v21 = v7 + 32;
            v22 = *(_QWORD *)(v7 + 16);
            if ( v22 )
              _rust_dealloc(*(_QWORD *)(v7 + 8), v22, 1LL);
            v7 += 32LL;
          }
          while ( v20 != v21 );
        }
LABEL_33:
        v2 = v27;
        if ( v28 )
        {
          if ( 32 * v28 )
            _rust_dealloc(v25, 32 * v28, 8LL);
        }
      }
      compat_core::esxi::vm::EsxiVM::kill(&v29, v2, v4, v5);
      if ( (_BYTE)v29 == 3 )
      {
        result = v26;
        *(_BYTE *)v26 = 3;
      }
      else
      {
LABEL_38:
        result = v26;
        *(_OWORD *)v26 = v29;
      }
    }
    return result;
  }
}
