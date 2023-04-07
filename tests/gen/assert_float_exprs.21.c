
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_float_exprs.21.h"

void test() {
    floatexprs21Instance instance;
    floatexprs21Instantiate(&instance, resolveTestImports);
    printStart("float_exprs.21.wasm");
    assertEqualF32(
        floatexprs21_f32X2Eno_reassociate_add(&instance, -24154321453056.0, 26125811712.0, -238608082534400.0, -2478953463808.0),
        -265215220383744.0,
        "f32.no_reassociate_add(-24154321453056.0, 26125811712.0, -238608082534400.0, -2478953463808.0)"
    );
    assertEqualF32(
        floatexprs21_f32X2Eno_reassociate_add(&instance, 0.0036181053146719933, -0.009859439916908741, 0.06337537616491318, -0.011150198988616467),
        0.04598383978009224,
        "f32.no_reassociate_add(0.0036181053146719933, -0.009859439916908741, 0.06337537616491318, -0.011150198988616467)"
    );
    assertEqualF32(
        floatexprs21_f32X2Eno_reassociate_add(&instance, -34206967808.0, -3770877214720.0, 30868424884224.0, 421132075008.0),
        27484470902784.0,
        "f32.no_reassociate_add(-34206967808.0, -3770877214720.0, 30868424884224.0, 421132075008.0)"
    );
    assertEqualF32(
        floatexprs21_f32X2Eno_reassociate_add(&instance, 153506392571904.0, 925114682048512.0, -36021854208.0, 2450846046486528.0),
        3529430982983680.0,
        "f32.no_reassociate_add(153506392571904.0, 925114682048512.0, -36021854208.0, 2450846046486528.0)"
    );
    assertEqualF32(
        floatexprs21_f32X2Eno_reassociate_add(&instance, 4.7060031399738006e+32, -3.965520407781218e+32, 4.806693894491044e+31, -3.564407275758035e+28),
        1.220795633595999e+32,
        "f32.no_reassociate_add(4.7060031399738006e+32, -3.965520407781218e+32, 4.806693894491044e+31, -3.564407275758035e+28)"
    );
    assertEqualF64(
        floatexprs21_f64X2Eno_reassociate_add(&instance, -2.070465292771702e+253, 1.5946897043763697e+255, 4.5110663655941613e+257, -1.3743335091868633e+258),
        -9.216528875759986e+257,
        "f64.no_reassociate_add(-2.070465292771702e+253, 1.5946897043763697e+255, 4.5110663655941613e+257, -1.3743335091868633e+258)"
    );
    assertEqualF64(
        floatexprs21_f64X2Eno_reassociate_add(&instance, 3.485747658213531e-164, 3.1210957391311754e-164, -6.83008546431621e-164, -2.617177347131095e-179),
        -2.2324206697150536e-165,
        "f64.no_reassociate_add(3.485747658213531e-164, 3.1210957391311754e-164, -6.83008546431621e-164, -2.617177347131095e-179)"
    );
    assertEqualF64(
        floatexprs21_f64X2Eno_reassociate_add(&instance, -5.4125849211227263e+132, 5.976036561703795e+122, -3.558300777933963e+131, 3.7362725995762544e+119),
        -5.768414998318146e+132,
        "f64.no_reassociate_add(-5.4125849211227263e+132, 5.976036561703795e+122, -3.558300777933963e+131, 3.7362725995762544e+119)"
    );
    assertEqualF64(
        floatexprs21_f64X2Eno_reassociate_add(&instance, -6.469047714189599e-96, 6.4286584974746e-93, -2.1277698072285604e-79, 8.768287273189493e-79),
        6.640517465960996e-79,
        "f64.no_reassociate_add(-6.469047714189599e-96, 6.4286584974746e-93, -2.1277698072285604e-79, 8.768287273189493e-79)"
    );
    assertEqualF64(
        floatexprs21_f64X2Eno_reassociate_add(&instance, -1.6422137086414828e+193, -8.803213793979071e+184, 4.4995705978285785e+194, -1.1409126716627439e+194),
        3.1944365544213656e+194,
        "f64.no_reassociate_add(-1.6422137086414828e+193, -8.803213793979071e+184, 4.4995705978285785e+194, -1.1409126716627439e+194)"
    );
}
