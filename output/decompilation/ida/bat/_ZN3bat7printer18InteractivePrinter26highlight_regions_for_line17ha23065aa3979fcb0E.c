__int64 __fastcall bat::printer::InteractivePrinter::highlight_regions_for_line(
        __int64 a1,
        __int64 a2,
        const char *a3,
        unsigned __int64 a4)
{
  __int64 result; // rax
  const char *v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // kr00_16
  __int64 v10; // r13
  __int128 v11; // xmm0
  __int128 v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int128 v15; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-38h]

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 296)) )
  {
    result = alloc::alloc::Global::alloc_impl(8LL, 32LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)&v12 = 0xFF7F7F7FFF7F7F7FLL;
    BYTE8(v12) = 0;
    *(_OWORD *)result = v12;
    *(_QWORD *)(result + 16) = a3;
    *(_QWORD *)(result + 24) = a4;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 1LL;
    *(_BYTE *)a1 = 13;
  }
  else
  {
    v7 = asc_191B49;
    if ( a4 < 0x4001 )
      v7 = a3;
    v8 = 1LL;
    if ( a4 < 0x4001 )
      v8 = a4;
    syntect::easy::HighlightLines::highlight_line(&v12, a2 + 296, v7, v8, *(_QWORD *)(a2 + 504));
    v9 = v12;
    v10 = v13;
    result = v14;
    if ( (_QWORD)v12 == 0x800000000000000ALL )
    {
      if ( a4 > 0x4000 )
      {
        if ( !v14 )
          core::panicking::panic_bounds_check(0LL, 0LL, &off_6CEAC0);
        *(_QWORD *)(v13 + 16) = a3;
        *(_QWORD *)(v10 + 24) = a4;
      }
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v9 + 1);
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = result;
      *(_BYTE *)a1 = 13;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = v17;
      v11 = v15;
      *(_OWORD *)(a1 + 56) = v16;
      *(_OWORD *)(a1 + 40) = v11;
      *(_BYTE *)a1 = 2;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 24) = v10;
      *(_QWORD *)(a1 + 32) = result;
    }
  }
  return result;
}