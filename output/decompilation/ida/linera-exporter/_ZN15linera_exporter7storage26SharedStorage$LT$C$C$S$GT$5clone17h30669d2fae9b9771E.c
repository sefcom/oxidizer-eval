void *__fastcall linera_exporter::storage::SharedStorage<C,S>::clone(char *dest, _QWORD *a2)
{
  char v2; // of
  volatile signed __int64 *v3; // r15
  __int64 v4; // rt0
  volatile signed __int64 *v5; // r12
  __int64 v6; // rt0
  volatile signed __int64 *v7; // rax
  __int64 v8; // rt0
  __int128 v9; // xmm0
  void *result; // rax
  _OWORD v11[2]; // [rsp+0h] [rbp-118h] BYREF
  _BYTE src[248]; // [rsp+20h] [rbp-F8h] BYREF

  <linera_storage::db_storage::DbStorage<Database,Clock> as core::clone::Clone>::clone(v11, a2 + 27);
  linera_exporter::storage::CanonicalState<C>::clone(src);
  v3 = (volatile signed __int64 *)a2[32];
  v4 = _InterlockedIncrement64(v3);
  if ( (v4 < 0) ^ v2 | (v4 == 0)
    || (v5 = (volatile signed __int64 *)a2[33], v6 = _InterlockedIncrement64(v5), (v6 < 0) ^ v2 | (v6 == 0))
    || (v7 = (volatile signed __int64 *)a2[31], v8 = _InterlockedIncrement64(v7), (v8 < 0) ^ v2 | (v8 == 0)) )
  {
    BUG();
  }
  v9 = v11[0];
  *(_OWORD *)(dest + 232) = v11[1];
  *(_OWORD *)(dest + 216) = v9;
  *((_QWORD *)dest + 31) = v7;
  result = memcpy(dest, src, 0xD8uLL);
  *((_QWORD *)dest + 32) = v3;
  *((_QWORD *)dest + 33) = v5;
  return result;
}