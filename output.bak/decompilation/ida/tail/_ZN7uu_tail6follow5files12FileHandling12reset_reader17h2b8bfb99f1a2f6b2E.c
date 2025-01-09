__int64 __fastcall uu_tail::follow::files::FileHandling::reset_reader(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 mut; // rbx
  __int64 result; // rax

  mut = uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
  result = core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(
             *(_QWORD *)(mut + 200),
             *(_QWORD *)(mut + 208));
  *(_QWORD *)(mut + 200) = 0LL;
  return result;
}
