__int64 __fastcall uu_dd::Alarm::manual_trigger_fn(__int64 a1)
{
  __int64 v1; // rax

  v1 = alloc::sync::Arc<T,A>::downgrade(a1);
  return alloc::boxed::Box<T>::new(v1);
}
