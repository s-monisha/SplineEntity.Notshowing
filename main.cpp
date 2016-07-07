#include <QProcess>
#include "EntityWriter.h"
#include "libdxfrw.h"
using namespace std;

    int main()
    {
        dxfRW dxf("./output.dxf");
        EntityWriter writer(dxf);

//        Line line(12, 34, 45, 65);
//        writer.getElement(&line);
        dxf.write(&writer, DRW::Version::AC1024, false);
        QProcess::execute("librecad output.dxf");
        return 0;
    }
