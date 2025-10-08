__int64 __fastcall uu_head::head_backwards_without_seek_file(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a2 == 1LL )
    return uu_head::read_but_last_n_lines(a1, *(_QWORD *)(a2 + 8), *(_BYTE *)(a2 + 43));
  if ( (unsigned int)*(_QWORD *)a2 != 3 )
    core::panicking::panic(aInternalErrorE_0, 40LL, &off_F7D18);
  return uu_head::read_but_last_n_bytes(a1, *(_QWORD *)(a2 + 8));
}