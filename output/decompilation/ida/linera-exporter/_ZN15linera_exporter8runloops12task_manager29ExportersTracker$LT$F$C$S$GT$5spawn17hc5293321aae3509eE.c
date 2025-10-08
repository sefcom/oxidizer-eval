__int64 __fastcall linera_exporter::runloops::task_manager::ExportersTracker<F,S>::spawn(__int64 a1, __int128 *a2)
{
  char v2; // al
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int128 v10; // [rsp+0h] [rbp-268h] BYREF
  __int64 v11; // [rsp+10h] [rbp-258h]
  int v12; // [rsp+18h] [rbp-250h]
  _OWORD src[17]; // [rsp+20h] [rbp-248h] BYREF
  _BYTE dest[304]; // [rsp+138h] [rbp-130h] BYREF

  <alloc::string::String as core::clone::Clone>::clone(src, a2);
  v2 = *((_BYTE *)a2 + 24);
  v11 = *(_QWORD *)&src[1];
  v10 = src[0];
  LOBYTE(v12) = v2;
  linera_exporter::storage::SharedStorage<C,S>::clone(src);
  memcpy(dest, src, 0x110uLL);
  v3 = ((__int64 (__fastcall *)(__int64, __int128 *, _BYTE *))linera_exporter::runloops::task_manager::ExporterBuilder<F>::spawn)(
         a1 + 272,
         &v10,
         dest);
  v4 = *a2;
  src[1] = a2[1];
  src[0] = v4;
  v8 = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, int))hashbrown::map::HashMap<K,V,S,A>::insert)(
         a1 + 448,
         src,
         v3,
         v5,
         v6,
         v7,
         v10,
         *((_QWORD *)&v10 + 1),
         v11,
         v12);
  return core::ptr::drop_in_place<core::option::Option<tokio::runtime::task::join::JoinHandle<core::result::Result<(),anyhow::Error>>>>(v8);
}