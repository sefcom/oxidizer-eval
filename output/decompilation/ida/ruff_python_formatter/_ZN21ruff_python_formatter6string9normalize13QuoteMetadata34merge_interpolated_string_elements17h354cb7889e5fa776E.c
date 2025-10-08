_OWORD *__fastcall ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements(
        _OWORD *a1,
        __int128 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 *a5,
        unsigned __int8 a6)
{
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _OWORD *result; // rax
  unsigned int v17; // [rsp+Ch] [rbp-8Ch]
  __int128 v18; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v19; // [rsp+20h] [rbp-78h]
  _OWORD *v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+48h] [rbp-50h] BYREF
  _OWORD v25[4]; // [rsp+58h] [rbp-40h] BYREF

  v19 = a5;
  v20 = a1;
  v6 = *a2;
  v18 = *a2;
  v7 = *(_QWORD *)(a3 + 16);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v23 = *v19;
    v22 = v19[1];
    v21 = v8 + 8;
    v9 = 80 * v7;
    v10 = 0LL;
    v17 = a4;
    v11 = a6;
    do
    {
      v12 = *(_QWORD *)(v8 + v10);
      if ( v12 == 0x8000000000000001LL )
      {
        v13 = <str as ruff_text_size::traits::TextSlice>::slice(v23, v22, v21 + v10);
        ruff_python_formatter::string::normalize::QuoteMetadata::from_str((__int64)v25, v13, v14, v17, v11);
        ruff_python_formatter::string::normalize::QuoteMetadata::merge(
          (__int64)&v24,
          (unsigned __int8 *)&v18,
          (__int64)v25,
          *(double *)&v6);
        if ( BYTE12(v24) == 2 )
          core::option::expect_failed(aMergeToSucceed, 54LL, &off_57F6E8);
        v6 = v24;
      }
      else
      {
        v15 = *(_QWORD *)(v8 + v10 + 64);
        if ( v15 == 0 || v12 != 0x8000000000000000LL )
          goto LABEL_4;
        ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements(
          v25,
          &v18,
          v15,
          v17,
          v19,
          v11);
        v6 = v25[0];
      }
      v18 = v6;
LABEL_4:
      v10 += 80LL;
    }
    while ( v9 != v10 );
  }
  result = v20;
  *v20 = v18;
  return result;
}