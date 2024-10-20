        __int64 a6)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v12; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+10h] [rbp-78h]
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-38h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12, a2, a2 + 24 * a3);
  *((_QWORD *)&v13 + 1) = 0LL;
  BYTE8(v14) = 0;
  uu_od::multifilereader::MultifileReader::next_file((__int64)&v12);
  v17 = v14;
  v16 = v13;
  v15 = v12;
  *(_QWORD *)a1 = a5;
  *(_QWORD *)(a1 + 8) = a6;
  v9 = v16;
  v10 = v17;
  *(_OWORD *)(a1 + 16) = v15;
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 1LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return a1;
}
