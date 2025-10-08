
  fn bat::printer::InteractivePrinter::get_header_component_indent_length::hd64a2392c9e377f1(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i8 = bat::style::StyleComponents::grid::h47e585e5c9942068(arg1.byte_offset(0xc0));
    let mut rcx: i64 = arg2 + 2;
    
    if arg2 == 0
    {
        rcx = arg2;
    }
    
    if rax == 0
    {
        return arg2;
    }
    
    rcx
}
