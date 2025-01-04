__int64 __fastcall uu_sort::merge::FileMerger::write_all(__int128 *a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 v6; // rbx
  _BYTE v8[48]; // [rsp+0h] [rbp-A8h] BYREF
  _OWORD v9[7]; // [rsp+30h] [rbp-78h] BYREF

  uu_sort::Output::into_write((__int64)v8, a3);
  v9[5] = a1[5];
  v9[4] = a1[4];
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v9[3] = a1[3];
  v9[2] = v5;
  v9[1] = v4;
  v9[0] = v3;
  v6 = uu_sort::merge::FileMerger::write_all_to(v9, a2, v8);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v8);
  return v6;
}
