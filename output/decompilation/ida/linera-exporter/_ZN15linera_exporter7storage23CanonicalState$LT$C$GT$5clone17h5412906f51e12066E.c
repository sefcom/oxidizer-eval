void *__fastcall linera_exporter::storage::CanonicalState<C>::clone(_QWORD *dest, _QWORD *a2)
{
  __int64 v2; // r12
  volatile signed __int64 *v3; // r14
  volatile signed __int64 *v4; // r15
  void *result; // rax
  _BYTE src[216]; // [rsp+10h] [rbp-D8h] BYREF

  v2 = a2[25];
  v3 = (volatile signed __int64 *)a2[23];
  if ( _InterlockedIncrement64(v3) <= 0 || (v4 = (volatile signed __int64 *)a2[24], _InterlockedIncrement64(v4) <= 0) )
    BUG();
  <linera_views::views::log_view::LogView<C,T> as linera_views::views::ClonableView>::clone_unchecked(src);
  dest[25] = v2;
  result = memcpy(dest, src, 0xB8uLL);
  dest[23] = v3;
  dest[24] = v4;
  return result;
}