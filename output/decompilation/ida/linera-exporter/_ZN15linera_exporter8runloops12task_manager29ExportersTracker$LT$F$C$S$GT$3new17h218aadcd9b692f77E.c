void *__fastcall linera_exporter::runloops::task_manager::ExportersTracker<F,S>::new(
        _OWORD *dest,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r12
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  void *result; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // [rsp+0h] [rbp-268h]
  __int128 v18; // [rsp+10h] [rbp-258h]
  __int128 v19; // [rsp+20h] [rbp-248h]
  __int128 v20; // [rsp+30h] [rbp-238h] BYREF
  __int128 v21; // [rsp+40h] [rbp-228h]
  __int128 v22; // [rsp+50h] [rbp-218h]
  __int128 v23; // [rsp+60h] [rbp-208h]
  __int128 v24; // [rsp+70h] [rbp-1F8h]
  _OWORD v25[3]; // [rsp+80h] [rbp-1E8h] BYREF
  _OWORD v26[8]; // [rsp+B0h] [rbp-1B8h] BYREF
  _BYTE desta[272]; // [rsp+138h] [rbp-130h] BYREF

  linera_exporter::runloops::task_manager::ExporterBuilder<F>::new(&v20);
  v26[7] = v24;
  v26[6] = v23;
  v26[5] = v22;
  v26[4] = v21;
  v26[3] = v20;
  memcpy(desta, a5, sizeof(desta));
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v26, a6);
  core::iter::traits::iterator::Iterator::collect(v25, v26);
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v26);
  v19 = v26[2];
  v18 = v26[1];
  v17 = v26[0];
  v8 = std::thread::local::LocalKey<T>::with();
  v10 = v9;
  dest[21] = v24;
  v11 = v20;
  v12 = v21;
  v13 = v22;
  dest[20] = v23;
  dest[19] = v13;
  dest[18] = v12;
  dest[17] = v11;
  result = memcpy(dest, a5, 0x110uLL);
  v15 = v25[1];
  v16 = v25[2];
  dest[22] = v25[0];
  dest[23] = v15;
  dest[24] = v16;
  dest[26] = v18;
  dest[25] = v17;
  dest[27] = v19;
  dest[29] = xmmword_13E6248;
  dest[28] = *(_OWORD *)&off_13E6238;
  *((_QWORD *)dest + 60) = v8;
  *((_QWORD *)dest + 61) = v10;
  return result;
}