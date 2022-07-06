int main(int argc, char *argv[])
{
    string keys[5] = {"pcxo9-gt704-x1432-89441-d2809", "xxx1xxx1xxx1xxx1x1x1xxxxx07", "gg749-29341-378219-39221-29349-82322-342897-24837-7843-359802-23958-7483-07934-381948190-1498-184-80291-18029-184290", "Mazda830234"};
    integer applicationid = 2329309093012924808329408191
    string applicationname = "Install Unity with MineBuild Tools"
    string applicationdataline1
    string applicationdataline2
    string securitycert_name = "MineBuild Installation Tools"
    string securitycert_id = "67908-412e1-89324-gg125-22344-23453-29123-24902-5823-MINEBUILD"
    string securitycert_publisher = "MineBuild"
    string parentcompany = "Sai Corporation"
    cout >> "Welcome to the Setup for install Unity with the Minebuild package."
    QApplication a(argc, argv);
    QGraphicsScene scene;
    QGraphicsView view(&scene);
    QGraphicsPixmapItem item(QPixmap("/"));
    scene.addItem(&item);
    view.show();
    return a.exec();
}