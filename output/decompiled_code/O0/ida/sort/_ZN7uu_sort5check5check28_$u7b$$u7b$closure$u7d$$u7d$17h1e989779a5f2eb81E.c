__int64 __fastcall uu_sort::check::check::{{closure}}(__int64 *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // r12

  v2 = a1 + 4;
  v3 = uu_sort::check::reader(a1[24], a1[25], a1, a1 + 2, a1 + 4);
  v4 = *a1;
  v5 = a1 + 1;
  if ( *a1 )
  {
    if ( v4 == 1 )
      std::sync::mpmc::counter::Receiver<C>::release(v5);
    else
      std::sync::mpmc::counter::Receiver<C>::release(v5);
  }
  else
  {
    std::sync::mpmc::counter::Receiver<C>::release(v5);
  }
  v6 = a1[2];
  v7 = a1 + 3;
  if ( v6 )
  {
    if ( v6 == 1 )
      std::sync::mpmc::counter::Sender<C>::release(v7);
    else
      std::sync::mpmc::counter::Sender<C>::release(v7);
  }
  else
  {
    std::sync::mpmc::counter::Sender<C>::release(v7);
  }
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(v2);
  return v3;
}
