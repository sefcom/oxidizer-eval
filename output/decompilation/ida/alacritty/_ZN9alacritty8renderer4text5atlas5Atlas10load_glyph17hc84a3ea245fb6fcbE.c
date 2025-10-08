__int64 __fastcall alacritty::renderer::text::atlas::Atlas::load_glyph(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 result; // rax
  __int128 v10; // xmm0
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rbp
  __int64 v13; // [rsp+18h] [rbp-80h]
  unsigned __int64 *v14; // [rsp+20h] [rbp-78h]
  __int128 v15; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int128 v16; // [rsp+3Ch] [rbp-5Ch]
  _BYTE v17[76]; // [rsp+4Ch] [rbp-4Ch] BYREF

  while ( 1 )
  {
    v14 = a4;
    v5 = *a4;
    v6 = *(_QWORD *)(a3 + 16);
    if ( *a4 >= v6 )
      core::panicking::panic_bounds_check(*a4, v6, &off_883C80);
    v7 = a3;
    v8 = *(_QWORD *)(a3 + 8);
    v13 = a5;
    alacritty::renderer::text::atlas::Atlas::insert(&v15, (unsigned int *)(27 * v5 + v8 + v5), a5);
    if ( BYTE12(v16) != 2 )
      break;
    if ( (_BYTE)v15 )
    {
      result = *(unsigned int *)(27 * v5 + v8 + v5);
      *(_DWORD *)a1 = result;
      *(_OWORD *)(a1 + 4) = 0LL;
      *(_OWORD *)(a1 + 13) = 0LL;
      return result;
    }
    v11 = *(_BYTE *)(v8 + 28 * v5 + 24);
    v12 = v5 + 1;
    *v14 = v12;
    if ( v12 == v6 )
      alacritty::renderer::text::atlas::Atlas::new(v17, v11);
    a3 = v7;
    a4 = v14;
    a5 = v13;
  }
  v10 = v15;
  result = a1;
  *(_OWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v10;
  return result;
}