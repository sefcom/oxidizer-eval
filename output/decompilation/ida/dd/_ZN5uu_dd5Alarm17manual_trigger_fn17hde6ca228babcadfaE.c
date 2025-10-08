__int64 __fastcall uu_dd::Alarm::manual_trigger_fn(_QWORD *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  alloc::sync::Arc<T,A>::downgrade(*a1);
  return alloc::boxed::Box<T>::new(v1);
}