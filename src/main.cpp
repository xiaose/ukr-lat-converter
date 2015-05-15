//========================================
#include <QCoreApplication>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <iostream>

#define INLIST(one, two) pair.first = one; pair.second = two; list.append(pair)
//========================================
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QStringList args = QCoreApplication::arguments();

    args.removeFirst();
    if(args.count() < 1) {
        std::cout << "ERROR: we have no input file" << std::endl;
    }

    QPair<QString, QString> pair;
    QList<QPair<QString,QString> > list;

    // correspondance
    INLIST("й","j");
    INLIST("ц","c");
    INLIST("у","u");
    INLIST("к","k");
    INLIST("е","e");
    INLIST("н","n");
    INLIST("г","ɤ");
    INLIST("ш","š");
    INLIST("щ","ŝ");
    INLIST("з","z");
    INLIST("х","h");
    INLIST("ґ","g");
    INLIST("ф","f");
    INLIST("і","i");
    INLIST("в","v");
    INLIST("а","a");
    INLIST("п","p");
    INLIST("р","r");
    INLIST("о","o");
    INLIST("л","ł");
    INLIST("д","d");
    INLIST("ж","ž");
    INLIST("є","je");
    INLIST("я","ja");
    INLIST("ч","č");
    INLIST("с","s");
    INLIST("м","m");
    INLIST("и","ı");
    INLIST("т","t");
    INLIST("б","b");
    INLIST("ю","ju");

    INLIST("Й","J");
    INLIST("Ц","C");
    INLIST("У","U");
    INLIST("К","K");
    INLIST("Е","E");
    INLIST("Н","N");
    INLIST("Г","Ġ");
    INLIST("Ш","Š");
    INLIST("Щ","Ŝ");
    INLIST("З","Z");
    INLIST("Х","H");
    INLIST("Ґ","G");
    INLIST("Ф","F");
    INLIST("В","V");
    INLIST("А","A");
    INLIST("П","P");
    INLIST("Р","R");
    INLIST("О","O");
    INLIST("Л","Ł");
    INLIST("Д","D");
    INLIST("Ж","Ž");
    INLIST("Є","È");
    INLIST("Я","À");
    INLIST("Ч","Č");
    INLIST("С","S");
    INLIST("М","M");
    INLIST("И","Y");
    INLIST("Т","T");
    INLIST("Б","B");
    INLIST("Ю","Ù");

    INLIST(" ɤ"," ġ");
    INLIST("ɤu","ɣυ");
    INLIST(" u "," υ ");
    INLIST(" i "," j ");
    INLIST("v ","υ ");
    INLIST("ja","à");
    INLIST("aj","á");
    INLIST("je","è");
    INLIST("ej","é");
    INLIST("jo","ò");
    INLIST("oj","ó");
    INLIST("áe","ǎ");
    INLIST("łь","l");
    INLIST("Łь","L");
    INLIST("łi","li");
    INLIST("Łi","Li");
    INLIST("łju","lu");
    INLIST("Łju","Lu");
    INLIST("łí","lí");
    INLIST("Łí","Lí");
    INLIST("cь","ċ");
    INLIST("Cь","Ċ");
    INLIST("cju","ċu");
    INLIST("Cju","Ċu");
    INLIST("tь","ć");
    INLIST("Tь","Ć");
    INLIST("sь","ś");
    INLIST("sà","śa");
    INLIST("Sà","Śa");
    INLIST("rà","ŕa");
    INLIST("Rà","Ŕa");
    INLIST("dz","ʒ");
    INLIST("Dz","Σ");
    INLIST("dž","ʓ");
    INLIST("Dž","Ʒ");
    INLIST("łà","la");
    INLIST("Łà","La");
    INLIST("tà","ća");
    INLIST("cà","ċa");
    INLIST("pà","ṕa");
    INLIST("dà","ða");
    INLIST("Dà","Ða");
    INLIST("nnà","ńa");
    INLIST("nь","ń");
    INLIST("ćś","ç");
    INLIST("ju","ù");
    INLIST("uj","ú");
    INLIST("ıj ","ý ");
    INLIST("ij","í");
    INLIST("ıj","í");
    INLIST("ji","ì");
    INLIST("rù","ŕu");
    INLIST("pù","ṕu");
    INLIST("sù","śu");
    INLIST("šč","ş");
    INLIST("àè","ǎe");
    INLIST("zd","ʑ");
    INLIST("cі","ċı");
    INLIST("zi","żı");
    INLIST("om ","ǫ ");
    INLIST("am ","ą ");
    INLIST("em ","ę ");
    INLIST("iv","iυ");
    INLIST("ıv","ıυ");
    INLIST("av","aυ");
    INLIST("ov","oυ");
    INLIST("iυ ","iν ");
    INLIST("áśa","ásä");
    INLIST(" ǎe"," jæ");
    INLIST("ah ","ā ");
    INLIST("ih ","y ");
    INLIST("ıh ","ý ");
    INLIST("ti","ćı");
    INLIST("oàć","óać");
    INLIST("oїj","oĳ");
    INLIST("iè","íe");
    INLIST("čà","ča");
    INLIST("čč","ĉ");
    INLIST("dd","đ");
    INLIST("sh","sχ");
    INLIST("ım ","ī ");
    INLIST("υáu","váυ");
    INLIST("rià","ŕıa");
    INLIST("ça ","ċa ");
    INLIST("ćaċ","țaċ");
    INLIST("žč","ʐč");
    INLIST("žč","ʐč");
    INLIST("íś","íș");
    INLIST("óu","óυ");
    INLIST("oυi","ovi");
    INLIST("tù","țu");
    INLIST("iù","íu");
    INLIST("łla","lla");
    INLIST(" u"," υ");
    INLIST("υǎç","váeċ");
    INLIST("υǎ","vǎ");
    INLIST("υo","vo");
    INLIST("υe","ve");
    INLIST("υa","va");
    INLIST("υe","ve");
    INLIST("υu","vυ");
    INLIST("υý","vý");
    INLIST(" ćı"," ti");
    INLIST("dь","ð");
    INLIST("tćı","ťi");
    INLIST("nni","ńı");
    INLIST("nnù","ńu");
    INLIST("iàh","íā");
    INLIST(" υž"," vž");
    INLIST("zà","ża");
    INLIST("țuț","tuć");
    INLIST("óυv","oùv");
    INLIST("óś","ós");
    INLIST("uυ ","uv ");


    INLIST("'","");

    // read file
    QFile file(args.first());
    if(!file.open(QIODevice::ReadOnly)) {
        std::cout << "ERROR: " << file.errorString().toStdString() << std::endl;
        return 0;
    }
    QTextStream in(&file);
    QString content = in.readAll();
    file.close();

    //std::cout << content.toStdString() << std::endl;

    std::cout << "------------------" << std::endl;
    for (int i = 0; i < list.size(); ++i) {
        //std::cout << list.at(i).first.toStdString() << " : " << list.at(i).second.toStdString() << std::endl;
        content.replace(list.at(i).first, list.at(i).second);
    }
    std::cout << "------------------" << std::endl;

    std::cout << content.toStdString() << std::endl;

    return 0;
}
//========================================
