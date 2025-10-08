__int64 __fastcall uu_tail::follow::files::FileHandling::reset_reader(__int64 a1)
{
  __int64 mut; // r14
  __int64 result; // rax

  mut = uu_tail::follow::files::FileHandling::get_mut(a1);
  result = core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
             *(_QWORD *)(mut + 200),
             *(_QWORD *)(mut + 208));
  *(_QWORD *)(mut + 200) = 0LL;
  return result;
}